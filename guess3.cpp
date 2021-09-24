// Copyright [2021] Rohnin Barrette"  [legal/copyright]

// Created by: Rohnin Barrette
// Created on: Sept 2021
// This program asks the user to guess a number between 1-9 with a try statement

#include <iostream>
#include <random>

int main() {
    // This program asks the user to guess a
    // number between 1-9 with a try statement
    std::string guessed_string;
    int random_number;
    int guessed_number;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 10);  // [1,10]
    random_number = idist(rgen);

    std::cout << random_number << std::endl;

    // input
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> guessed_string;
    std::cout << "" << std::endl;

    // process
    try {
        guessed_number = std::stoi(guessed_string);
        if (guessed_number == random_number)
        // output
            std::cout << "you guessed right";
        else
            std::cout << "You guessed wrong, it was " << random_number;
    } catch (std::invalid_argument) {
            std::cout << guessed_string << " is not an integer";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
