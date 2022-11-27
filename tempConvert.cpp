// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 30 2022
// This program converts your celsius to fahrenheit

#include <iostream>
#include <string>


void Fahrenheit() {
    // This function receives data, calculates, and outputs
    // Initializing variables
    float floatTemperatureCelsius;
    float temperatureFahrenheit;
    std::string strTemperatureCelsius, wait;

    // Get user's temperature value in celsius
    std::cout
        << "Enter your temperature in celsius degrees (Decimals allowed): \n";
    std::cout << ">> ";
    std::cin >> strTemperatureCelsius;

    // Tries casting the user's number to a float
    try {
        floatTemperatureCelsius = std::stoi(strTemperatureCelsius);
        // Exception thrown if the user did not enter a number.
    } catch (const std::exception) {
        std::cout << "Enter temperature.\n";
        std::cout << "Please try again";
        std::cin >> wait;
    }

    // Calculate for the fahrenheit value of user's input
    temperatureFahrenheit = floatTemperatureCelsius * 1.8 + 32;

    // Display the results
    std::cout << "\nYour celsius temperature in "
    "Fahrenheit is " << temperatureFahrenheit << " degrees.\n\n";
}

    main() {
        // This function calls the fahrenheit function

        // Call functions
        Fahrenheit();
    }
