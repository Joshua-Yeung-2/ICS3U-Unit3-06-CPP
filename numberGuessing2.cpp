// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on October 2021
// This program is a number guessing game.

#include <iostream>
#include <random>
#include <string>

int main() {
    // this function is to guessing the number
    // a number between 1 and 100
    int someRandomNumber;
    std::string userInputStr;
    int userInpuNumber;


    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1 , 10);  // [0,10]
    someRandomNumber = idist(rgen);


    std::cout << someRandomNumber << std::endl;


    // input
    std::cout << "Enter a random number from 1 to 10 here: ";
    std::cin >> userInputStr;
    std::cout << "" << std::endl;

    // process
    try {
        userInpuNumber = std::stoi(userInputStr);
        if (userInpuNumber == someRandomNumber) {
            // output
            std::cout << "congratulations! you got it right";
        } else {
            std::cout << "oops! you got it wrong, try again";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer";
    }

    std::cout << "\nDone" << std::endl;
}
