// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: September 2019
// This program calculates the circumference of a circle
// with user input

#include <iostream>

int main() {
    // This function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << circumference << " mm" << std::endl;
}
