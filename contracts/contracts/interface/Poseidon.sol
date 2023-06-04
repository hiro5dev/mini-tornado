// SPDX-License-Identifier: MIT
pragma solidity 0.8.17;

interface IPoseidon {
    function poseidon(uint256[2] calldata) external pure returns (uint256);
}
