// SPDX-License-Identifier: NONE
pragma solidity 0.8.17;

import "@openzeppelin/contracts/security/ReentrancyGuard.sol";
// import "./IncrementalMerkleTree.sol";
import "./interface/Poseidon.sol";
import "./interface/IVerifier.sol";

import "hardhat/console.sol";

error Tornado__MsgValueInvalid();
error Tornado__ExistingCommitment();
error Tornado__AttemptingToWithdrawAlreadySpentCommitment();
error Tornado__UnknonMerkleRootProvided();
error Tornado__InvalidProofProvided();
error Tornado__PaymentFailed();

// contract Tornado is IncrementalMerkleTree, ReentrancyGuard {
contract Tornado is ReentrancyGuard {
  // event Deposit(
  //     uint256 indexed commitment,
  //     uint256 root,
  //     uint256 leafIndex,
  //     uint256 timestamp,
  //     uint256[10] hashPairings,
  //     uint8[10] pairDirection
  // );
  event Deposit(
    uint256 root,
    uint256[10] hashPairings,
    uint8[10] pairDirection
  );
  event Withdrawal(address recipient, uint256 indexed nullifier);

  IPoseidon public immutable hasher;
  address verifier;

  uint256 public denomination = 0.1 ether;
  uint8 public treeLevel = 10;
  uint256 public nextLeafIdx = 0;
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

  // double spend records
  mapping(uint256 => bool) public nullifierHashes;
  // we store all commitments just to prevent accidental deposits with the sam ``e commitment
  mapping(uint256 => bool) public commitments;

  constructor(address poseidon, address _verifier) {
    verifier = _verifier;
    hasher = IPoseidon(poseidon);
  }

  // function deposit(
  //     uint256 _commitment
  // ) external payable nonReentrant returns (uint256) {
  //     if (msg.value != denomination) revert Tornado__MsgValueInvalid();
  //     if (commitments[_commitment]) revert Tornado__ExistingCommitment();

  //     console.log(
  //         "Tornado:: deposit was called with _commitment %o",
  //         _commitment
  //     );

  //     // insert new leaf
  //     (
  //         uint256 newRoot,
  //         uint256 leafIndex,
  //         uint256[10] memory hashPairings,
  //         uint8[10] memory hashDirections
  //     ) = insert(_commitment);

  //     commitments[_commitment] = true;
  //     emit Deposit(
  //         _commitment,
  //         newRoot,
  //         leafIndex,
  //         block.timestamp,
  //         hashPairings,
  //         hashDirections
  //     );
  //     console.log("Tornado:: deposit returns leafIndex: %o", leafIndex);
  //     return leafIndex;
  // }

  function deposit(uint256 _commitment) external payable nonReentrant {
    require(msg.value == denomination, "incorrect-amount");
    require(!commitments[_commitment], "existing-commitment");
    require(nextLeafIdx < 2 ** treeLevel, "tree-full");

    uint256 newRoot;
    uint256[10] memory hashPairings;
    uint8[10] memory hashDirections;

    uint256 currentIdx = nextLeafIdx;
    uint256 currentHash = _commitment;

    uint256 left;
    uint256 right;
    uint256[2] memory ins;

    for (uint8 i = 0; i < treeLevel; i++) {
      lastLevelHash[treeLevel] = currentHash;

      if (currentIdx % 2 == 0) {
        left = currentHash;
        right = levelDefaults[i];
        hashPairings[i] = levelDefaults[i];
        hashDirections[i] = 0;
      } else {
        left = lastLevelHash[i];
        right = currentHash;
        hashPairings[i] = lastLevelHash[i];
        hashDirections[i] = 1;
      }

      ins[0] = left;
      ins[1] = right;

      uint256 h = hasher.poseidon([left, right]);
      // uint256 h = hasher.MiMC5Sponge{ gas: 150000 }(ins, _commitment);

      currentHash = h;
      currentIdx = currentIdx / 2;
    }

    newRoot = currentHash;
    roots[newRoot] = true;
    nextLeafIdx += 1;

    commitments[_commitment] = true;
    emit Deposit(newRoot, hashPairings, hashDirections);
  }

  function withdraw(
    uint[2] memory a,
    uint[2][2] memory b,
    uint[2] memory c,
    uint[2] memory input
  ) external payable nonReentrant {
    uint256 _root = input[0];
    uint256 _nullifierHash = input[1];

    if (nullifierHashes[_nullifierHash])
      revert Tornado__AttemptingToWithdrawAlreadySpentCommitment();
    if (!roots[_root]) revert Tornado__UnknonMerkleRootProvided();

    uint256 _address = uint256(uint160(msg.sender));

    console.log("Tornado:: verifiy called with _root: %o ", _root);

    (bool verifyOK, ) = verifier.call(
      abi.encodeCall(
        IVerifier.verifyProof,
        (a, b, c, [_root, _nullifierHash, _address])
      )
    );

    if (!verifyOK) revert Tornado__InvalidProofProvided();
    nullifierHashes[_nullifierHash] = true;
    address payable target = payable(msg.sender);

    (bool ok, ) = target.call{ value: denomination }("");

    if (!ok) revert Tornado__PaymentFailed();

    emit Withdrawal(msg.sender, _nullifierHash);
  }
}
