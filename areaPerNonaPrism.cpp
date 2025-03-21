// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on February 2025
// This program calculates the surface area and volume of a nonagonal prism with user input

#include <cmath>  // For mathematical functions like tan and radians
#include <iostream>

// Declare commonly used standard library symbols
using std::cin;
using std::cout;
using std::endl;

double cot(double angle) {
    return 1.0 / tan(angle);
}

int main() {
    // Display welcome message
    std::cout << "Hello! Welcome to the Nonagonal Prism Calculator." << std::endl;
    std::cout << "I can help you calculate the volume and surface area of a nonagonal "
         << "prism." << std::endl;

    // Declare variables for base edge length and height
    double a, h;

    // Prompt user for inputs
    std::cout << "Please enter the base edge length (a): ";
    std::cin >> a;

    std::cout << "Please enter the height of the prism (h): ";
    std::cin >> h;

    // Calculate the surface area of the nonagonal prism
    double angle = 180.0 / 9.0;
    double surface_area = 9 * a * h + (9.0 / 2.0) * a * a *
                                          cot(angle * M_PI / 180.0);

    // Calculate the volume of the nonagonal prism
    double volume = (9.0 / 4.0) * a * a * cot(angle * M_PI / 180.0) * h;

    // Display the results
    std::cout << "The surface area of the nonagonal prism is: " << surface_area
         << std::endl;
    std::cout << "The volume of the nonagonal prism is: " << volume << std::endl;

    return 0;
}
