// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date:7th Oct,2026
// This program asks the user for the radius of a sphere,
// calculates and displays the surface area and volume
// back to the user with proper units

#include <cmath>
#include <iostream>

int main() {
    // declare variables
    double radius;
    double surface_area;
    double volume;

    // get the radius from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the surface area and volume
    surface_area = (4 * M_PI * radius * radius);
    volume = ((4.0 / 3.0) * M_PI * radius * radius * radius);

    // this function sets the decimal precision to 2
    std::cout.precision(2);
    std::cout << std::fixed;

    // display the surface area and volume
    std::cout << "The surface area is: " << surface_area << "cm²" << std::endl;
    std::cout << "The volume is: " << volume << "cm³" << std::endl;
    return 0;
}
