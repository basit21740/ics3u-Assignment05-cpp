// Copyright (c) 2022 Abdul basit All rights reserved.
//
// Created by: Abdul basit
// Created on: Jan 2022
// This program shows amount of positive negative and zeros
// with user input

#include <iostream>
#include <cstdlib>
#include <string>


int main() {
    int positiveNumbers = 0;
    int negativeNumbers = 0;
    int zeros = 0;
    std::string numberAsString;
    int numberAsNumber;

    while (true) {
    std::cout << "Enter a number to show the amount of +,-,0 numbers or “End”"
    " to display amounts: ";
    std::cin >> numberAsString;

        try {
            numberAsNumber = std::stoi(numberAsString);

            if (numberAsNumber > 0) {
                positiveNumbers = positiveNumbers + 1;

            } else if (numberAsNumber < 0) {
                negativeNumbers = negativeNumbers + 1;

            } else {
                zeros = zeros + 1; }
        } catch (std::invalid_argument) {
            if (numberAsString == "End") {
                std::cout << "There is " << positiveNumbers
                << " positive numbers, " << negativeNumbers
                << " negative numbers, and " << zeros << " zeros"
                << std::endl;
                    break;
            } else {
                std::cout << "Not a valid input" << std::endl;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
