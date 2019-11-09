// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon (Jay) Lee
// Created on: Nov 2019
// This program convert the temperature

#include <iostream>

void ConvertTemperature() {
    // convert temperature

    int tc;
    int tf;

    // input
    std::cout << "Enter the temperature in degrees Celsius (°C): ";
    std::cin >> tc;

    // process
    tf = (9.0 / 5) * tc + 32;

    // output
    std::cout << "The temperature in degrees Fahrenheit is " << tf << "°F" << std::endl;
}
    

main() {
    // this function just calls other functions

    // call functions
    ConvertTemperature();
}