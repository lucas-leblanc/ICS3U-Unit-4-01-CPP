// Copyright (c) 2022 Lucas LeBlanc All rights reserved

// Created by: Lucas LeBlanc
// Created on: Nov 2022
// This program adds each whole number that goes up to the users number

#include <iostream>

int main() {
    // This function adds each whole number that goes up to the users number

    int integer_a_i;
    int counter = 0;
    int the_sum = 0;
    std::string integer_a_s;

    // Input
    std::cout << "Enter a positive number: ";
    std::cin >> integer_a_s;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        integer_a_i = std::stoi(integer_a_s);

        while (counter < integer_a_i) {
            counter = counter + 1;
            the_sum = the_sum + counter;
            std::cout << "The sum of all positive numbers from 1 to "
            << integer_a_s << " is " << the_sum << "." << std::endl;
        }} catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
            }
    std::cout << "The sum of all positive numbers from 1 to "
    << integer_a_s << " is " << the_sum << "." << std::endl;

    std::cout << ("\nDone.") << std::endl;
}
