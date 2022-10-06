// Copyright (c) 2022 Kyanh Pham
//
// Created by: Kyanh Pham
// Created on: Oct 2022
// This program calculates the volume of a rectangular prism
// with length, width and height inputted from user

#include <iostream>

int main() {
    // This function calculates volume
    double length;
    double width;
    double height;
    double volume;

    // Input
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;
    std::cout << "Enter the height (cm) ";
    std::cin >> height;

    // Process
    volume = length * width * height;

    // output
    std::cout << "" << std::endl;
    std::cout << "Volume is " << volume << " cm³." << std::endl;

    std::cout << "\nDone." << std::endl;
}
