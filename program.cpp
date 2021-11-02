// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program is game

#include <iostream>
#include <random>

main() {
    // this function uses a break statement
    for (int counter1 = 0; counter1 < 256; counter1++) {
        for (int counter2 = 0; counter2 < 256; counter2++) {
            for (int counter3 = 0; counter3 < 256; counter3++) {
                std::cout << counter1 << ","
                << counter2 << "," << counter3 << std::endl;
            }
        }
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
