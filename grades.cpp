// Copyright (c) 2021 Austin de Mora All rights reserved
//
// Created by Jenoe Balote
// Created on May 2021
// This program converts level to percentage grades

#include <iostream>
#include <string>

int ConvertLevel(std::string level) {
    // process
    int percent;

    if (level == "4+") {
        percent = 97;
    } else if (level == "4") {
        percent = 90;
    } else if (level == "4-") {
        percent = 83;
    } else if (level == "3+") {
        percent = 78;
    } else if (level == "3") {
        percent = 75;
    } else if (level == "3-") {
        percent = 71;
    } else if (level == "2+") {
        percent = 68;
    } else if (level == "2") {
        percent = 65;
    } else if (level == "2-") {
        percent = 61;
    } else if (level == "1+") {
        percent = 58;
    } else if (level == "1") {
        percent = 55;
    } else if (level == "1-") {
        percent = 51;
    } else if (level == "R") {
        percent = 0;
    } else {
        percent = -1;
    }

    return percent;
}


main() {
    // This function calls other functions
    std::string levelFromUser;
    int convertedPercent;

    // Input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter level to convert: ";
    std::cin >> levelFromUser;

    // Call functions
    convertedPercent = ConvertLevel(levelFromUser);

    // Output
    if (convertedPercent == -1) {
        std::cout << "" << std::endl;
        std::cout << "-1" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Thanks for participating!" << std::endl;
    } else {
        std::cout << "" << std::endl;
        std::cout << "Level " << levelFromUser << " has a middle percentage of "
            << convertedPercent <<"%." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Thanks for participating!" << std::endl;
    }
}
