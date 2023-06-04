// SPDX-License-Identifier: MIT
pragma solidity 0.8.17;

import "./interface/Poseidon.sol";

import "hardhat/console.sol";

error IncrementalMerkleTree__MerkleTreeCapacity();

contract IncrementalMerkleTree {
    // poseidon hash function with 2 inputs
    IPoseidon public immutable hasher;
    uint256 public constant LEVELS = 10;
    // index of next leaf to be inserted
    uint256 public currentLeafIndex;
    mapping(uint8 => uint256) lastLevelHash;
    mapping(uint256 => bool) public roots;

    uint256[10] levelDefaults = [
        55500369262252243912076528022430767959179962998474667443840488060991043084439,
        70856588104716277533311594439757120064232755386223347892794632323041068398352,
        5172264304327660878595539613239158547117573430543475094156059207342631585925,
        67381394202435361673299909273958708923834463434686650780178788640116805982127,
        106907045815156353896171109195370831470310945360863865085812078751417614127745,
        57598307086273634797665166365748526907848197735696663705430234443791671208406,
        84439080998510185710151216348393721842459603844439216114117474408712654776214,
        36786689421709329991386532828057027726146372126930115849641633170946765033582,
        59586920649793364111786825592492600944611057147379751571968870842076623955474,
        50510163136758456195573884928194465370921900330420922003144541404961802117424
    ];

    constructor(address poseidon) {
        hasher = IPoseidon(poseidon);
    }

    function insert(uint256 _commitment) internal returns (uint256, uint256, uint256[10] memory, uint8[10] memory) {
        if (currentLeafIndex == 1 << LEVELS) revert IncrementalMerkleTree__MerkleTreeCapacity();

        console.log("IncrementalMerkleTree::insert was called with _commitment : %o . currentLeafIndex = %o", _commitment, currentLeafIndex);

        uint256 newRoot;
        uint8[10] memory hashDirections;
        uint256[10] memory hashPairings;

        uint256 left;
        uint256 right;
        uint256 currentHash = _commitment;
        uint256 currentIdx = currentLeafIndex;

        // incrementally update merkle roots upward from given leaf
        for (uint8 i = 0; i < LEVELS; i++) {
            if (currentIdx % 2 == 0) {
                left = currentHash;
                right = levelDefaults[i];
                hashPairings[i] = right;
                hashDirections[i] = 0;
            } else {
                left = lastLevelHash[i];
                right = currentHash;
                hashPairings[i] = left;
                hashDirections[i] = 1;
            }
            // update this level's last hash which will be used by the next insert(). Took 1 day to understand this logic!
            lastLevelHash[i] = currentHash;

            console.log("[i = %o] IncrementalMerkleTree::insert calling hasher.poseidon with left: %o and right: %o", i, left, right);
            //compute hash of left, right
            (uint256 h) = hasher.poseidon([left, right]);

            console.log("[i = %o] IncrementalMerkleTree::insert hasher.poseidon returned h: %o", i, h);

            currentHash = h;
            currentIdx = currentIdx / 2;
        }

        newRoot = currentHash;
        roots[newRoot] = true;
        currentLeafIndex += 1;
        console.log("IncrementalMerkleTree::insert returning currentLeafIndex: %o and newRoot: %o", currentLeafIndex, newRoot);
        return (newRoot, currentLeafIndex, hashPairings, hashDirections);
    }
}
