pragma circom 2.0.0;

include "./commitment_hasher.circom";
include "merkleTree.circom";

template Withdraw(levels) {
    signal input root;
    signal input nullifierHash;
    signal input recipient; // not taking part in any computations

    signal input secret[256];
    signal input nullifier[256];
    signal input hashPairings[10];
    signal input hashDirections[10];

    // check if the public variable (submitted) nullifierHash is equal to the output 
    // from hashing secret and nullifier
    component cHasher = CommitmentHasher();
    for (var i = 0; i < 256; i++) {
        cHasher.secret[i] <== secret[i];
        cHasher.nullifier[i] <== nullifier[i];
    }
    cHasher.nullifierHash === nullifierHash;

    // checking merkle tree hash path
    component tree = MerkleTreeChecker(10);
    tree.leaf <== cHasher.commitment;
    tree.root <== root;
    for (var i = 0; i<levels; i++) {
        tree.pathElements[i] <== hashPairings[i];
        tree.pathIndices[i] <== hashDirections[i];
    }

    // Add hidden signals to make sure that tampering with recipient or fee will invalidate the snark proof
    // Most likely it is not required, but it's better to stay on the safe side and it only takes 2 constraints
    // Squares are used to prevent optimizer from removing those constraints
    signal recipientSquare;
    recipientSquare <== recipient * recipient;
}

component main{public [root, nullifierHash, recipient]} = Withdraw(10);