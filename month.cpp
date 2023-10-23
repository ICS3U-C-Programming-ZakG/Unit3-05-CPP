// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Oct. 23, 2023
// This program ask the user a number from 1-12
// and will display the month corresponding with that number.

#include <iostream>

int main() {
    // declare variables
    int userMonth;

    // introduce program to user
    std::cout << "This program will ask for a number from 1-12";
    std::cout << " and will display the month corresponding";
    std::cout << " with that number." << std::endl;

        // get user input for month
        std::cout
        << "Please enter a number from 1-12 (Starting January = 1): ";
    std::cin >> userMonth;

    // state the month selected as a string
    switch (userMonth) {
        case 1:
            std::cout << userMonth << " represents January.\n";
            break;

        case 2:
            std::cout << userMonth << " represents February.\n";
            break;

        case 3:
            std::cout << userMonth << " represents March.\n";
            break;

        case 4:
            std::cout << userMonth << " represents April.\n";
            break;

        case 5:
            std::cout << userMonth << " represents May.\n";
            break;

        case 6:
            std::cout << userMonth << " represents June.\n";
            break;

        case 7:
            std::cout << userMonth << " represents July.\n";
            break;

        case 8:
            std::cout << userMonth << " represents August.\n";
            break;

        case 9:
            std::cout << userMonth << " represents September.\n";
            break;

        case 10:
            std::cout << userMonth << " represents October.\n";
            break;

        case 11:
            std::cout << userMonth << " represents November.\n";
            break;

        case 12:
            std::cout << userMonth << " represents December.\n";
            break;

        // handle the error case
        default:
            std::cout << "Error. " << userMonth;
            std::cout << " does not represent a month.\n";
    }
}
