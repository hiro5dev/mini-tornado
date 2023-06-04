pragma circom 2.0.0;

include "./commitment_hasher.circom";
include "./node_modules/circomlib/circuits/mimcsponge.circom";

template Withdraw(levels) {
    signal input root;
    signal input nullifierHash;
    signal input recipient;

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
    component leafHashers[10];

    signal currentHash[10 + 1];
    currentHash[0] <== cHasher.commitment;

    signal left[10];
    signal right[10];

    for(var i = 0; i < 10; i++){
        var d = hashDirections[i];

        leafHashers[i] = MiMCSponge(2,20,1);

        left[i] <== (1 - d) * currentHash[i];
        leafHashers[i].ins[0] <== left[i] + d * hashPairings[i];

        right[i] <== d * currentHash[i];
        leafHashers[i].ins[1] <== right[i] + (1 - d) * hashPairings[i];

        leafHashers[i].k <== cHasher.commitment;
        currentHash[i + 1] <== leafHashers[i].outs[0];
    }

    root === currentHash[10];


    // add recipient in the proof
    signal recipientSquare;
    recipientSquare <== recipient * recipient;
}

component main{public [root, nullifierHash, recipient]} = Withdraw(10);