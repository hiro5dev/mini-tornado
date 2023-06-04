// SPDX-License-Identifier: MIT
pragma solidity 0.8.17;

interface ITornado {
    // function deposit(uint256) external returns (uint256);
    function deposit(uint256) external payable;

    function withdraw(
        uint[2] memory a,
        uint[2][2] memory b,
        uint[2] memory c,
        uint[2] memory input
    ) external payable;
}
