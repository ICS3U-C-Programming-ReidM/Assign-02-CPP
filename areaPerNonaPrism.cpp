// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on February 2025
// This program calculates the surface area and volume of a nonagonal prism with user input

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // Display welcome message
    cout << "Hello! Welcome to the Nonagonal Prism Calculator." << endl;
    cout << "I can help you calculate the volume and surface area of a nonagonal prism." << endl;

    // Prompt user for the necessary inputs
    double a, h;
    cout << "Please enter the base edge length (a): ";
    cin >> a;
    cout << "Please enter the height of the prism (h): ";
    cin >> h;

    // Calculate the surface area of the nonagonal prism
    double surface_area = 9 * a * h + (9 / 2) * pow(a, 2) * (1 / tan(M_PI / 9));

    // Calculate the volume of the nonagonal prism
    double volume = (9 / 4) * pow(a, 2) * (1 / tan(M_PI / 9)) * h;

    // Display the calculated results
    cout << "The surface area of the nonagonal prism is: " << surface_area << endl;
    cout << "The volume of the nonagonal prism is: " << volume << endl;

    return 0;
}
