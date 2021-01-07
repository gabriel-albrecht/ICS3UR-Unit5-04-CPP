// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by Gabriel A
// Created on Jan 2021
// This program calculates the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>

int CalculateVolume(float radius, float height) {
    // calculate area
    float cylinderVolume;
    std::cout.precision(5);

    // process
    cylinderVolume = M_PI * pow(radius, 2.0) * height;

    // output
    return cylinderVolume;
}

main() {
    // this function gets length and width

    while (true) {
        try {
            float volume;
            float radiusFromUser;
            float heightFromUser;
            std::string radiusString;
            std::string heightString;
            std::cout.precision(5);
    
            // input
            std::cout << "Enter the radius of a cylinder (cm): ";
            std::cin >> radiusString;
            std::cout << "Enter the height of a cylinder (cm): ";
            std::cin >> heightString;
            std::cout << std::endl;
    
            radiusFromUser = std::stoi(radiusString);
            heightFromUser = std::stoi(heightString);
    
            // call functions
            volume = CalculateVolume(radiusFromUser, heightFromUser);

            if (radiusFromUser <= 0 or heightFromUser <= 0) {
                std::cout << "Invalid input" << std::endl;
            } else {
                // output
                std::cout << "The volume is " << volume << " cm³"
                << std::endl;
                break;
            }

        } catch (std::invalid_argument) {
            std::cout << "\nYou entered an invalid key.\nTry again.\n"
            << std::endl;
        }
    }
}
