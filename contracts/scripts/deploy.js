const fs = require("fs");

const { poseidonContract } = require("circomlibjs");
const { deploy, deployBytes } = require("../hardhat.utils.js");

const hre = require("hardhat");

async function main() {
  const currentTimestampInSeconds = Math.round(Date.now() / 1000);
  const unlockTime = currentTimestampInSeconds + 60;

  const lockedAmount = hre.ethers.utils.parseEther("0.001");

  hre.ethers.provider.getNetwork().then(async ({ chainId }) => {
    console.log(`Deploying on chainID: ${chainId}`);

    // deploy poseidon
    const abi = poseidonContract.generateABI(2);
    const bytecode = poseidonContract.createCode(2);
    const poseidon = await deployBytes("Poseidon", abi, bytecode, true);

    // deploy verifier
    // const verify = await deploy("Verifier", [], true)
    const verify = await deploy("Verifier2", [], true)

    // deploy tornado
    await deploy("Tornado", [poseidon.address, verify.address], true);
  });

  // sample deployment
  // const Lock = await hre.ethers.getContractFactory("Lock");
  // const lock = await Lock.deploy(unlockTime, { value: lockedAmount });

  // await lock.deployed();

  // console.log(
  //   `Lock with ${ethers.utils.formatEther(
  //     lockedAmount
  //   )}ETH and unlock timestamp ${unlockTime} deployed to ${lock.address}`
  // );
}

// We recommend this pattern to be able to use async/await everywhere
// and properly handle errors.
main().catch((error) => {
  console.error(error);
  process.exitCode = 1;
});
