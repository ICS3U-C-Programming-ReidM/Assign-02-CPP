// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on February 2025
// This program calculates the surface area and volume of a nonagonal prism with user input

#include <cmath>
#include <iostream>
#include <string>

// Function to calculate the cotangent of an angle
double cotangent(double angle_in_degrees) {
    return 1 / tan((angle_in_degrees * M_PI) / 180.0);
    // Convert degrees to radians
}

// Function to convert units (cm to meters or vice versa)
double convert_units(double value, std::string unit_from, std::string unit_to) {
    if (unit_from == "cm" && unit_to == "m") {
        return value * 0.01;
    } else if (unit_from == "m" && unit_to == "cm") {
        return value * 100;
    }
    return value;  // No conversion if units are the same
}

// Main function to calculate surface area and volume of the nonagonal prism
void nonagonal_prism_calculator() {
    std::cout <<
    "Hello! Welcome to the Nonagonal Prism Calculator." << std::endl;
    std::cout << "I can help you calculate the volume and surface area of a "
              << "nonagonal prism." << std::endl;

    // Allow user to choose units
    std::string unit_choice;
    std::cout <<
    "Which units would you like to use for input and output?(cm/m): ";
    std::cin >> unit_choice;
    while (unit_choice != "cm" && unit_choice != "m") {
        std::cout << "Invalid choice. Please choose 'cm' or 'm': ";
        std::cin >> unit_choice;
    }

    // Prompt user for the necessary inputs
    double base_edge_a, height_h;
    std::cout << "Please enter the base edge length (base_edge_a): ";
    std::cin >> base_edge_a;
    while (base_edge_a <= 0) {
        std::cout << "Edge length must be a positive value!" << std::endl;
        std::cout << "Please enter the base edge length (base_edge_a): ";
        std::cin >> base_edge_a;
    }

    std::cout << "Please enter the height of the prism (height_h): ";
    std::cin >> height_h;
    while (height_h <= 0) {
        std::cout << "Height must be a positive value!" << std::endl;
        std::cout << "Please enter the height of the prism (height_h): ";
        std::cin >> height_h;
    }

    // Calculate the surface area of the nonagonal prism
    double surface_area = 9 * base_edge_a * height_h + (9.0 / 2.0)
    * base_edge_a * base_edge_a * cotangent(180.0 / 9.0);

    // Calculate the volume of the nonagonal prism
    double volume = (9.0 / 4.0) * base_edge_a * base_edge_a *
    cotangent(180.0 / 9.0) * height_h;

    // Convert units if necessary
    if (unit_choice == "m") {
        surface_area = convert_units(surface_area, "cm", "m");
        // Convert surface area
        volume = convert_units(volume, "cm", "m");
        // Convert volume
    }

    // Display the calculated results
    std::cout << "\nThe surface area of the nonagonal prism is (" << unit_choice
              << "^2): " << surface_area << std::endl;
    std::cout << "The volume of the nonagonal prism is (" << unit_choice
              << "^3): " << volume << std::endl;

    // Ask the user if they want to perform another calculation
    std::string another_calculation;
    std::cout << "\nWould you like to perform another calculation? (yes/no): ";
    std::cin >> another_calculation;
    if (another_calculation == "yes") {
        nonagonal_prism_calculator();  // Recursive call for another calculation
    } else {
        std::cout << "Thank you for using the Nonagonal Prism Calculator!"
                  << std::endl;
    }
}

// Main function to run the program
int main() {
    nonagonal_prism_calculator();  // Start the calculation process
    return 0;
}
