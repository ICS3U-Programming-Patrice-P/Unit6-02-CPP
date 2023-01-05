// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-Odita
// Created on: Dec. 21, 2022
// This program Generates 10 random numbers, loops it to find the one with
// the greatest value and displays it.


#include <iostream>
#include <array>
#include <random>
#include <ctime>

// this function calculates the largest value in the array of elements
template <size_t MAX_ARRAY_SIZE>
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> ranNums) {
    int max = ranNums[0];

    for (int counter = 0; counter < ranNums.size(); counter++) {
        if (max < ranNums[counter]) {
            max = ranNums[counter];
        }
    }
    return max;
}

int main() {
    // declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initializing counter
    int counter = 0;

    // declaring variables
    std::array<int, MAX_ARRAY_SIZE > currentNumUser;
    int maxNumUser;

    // insert comment here
    srand(time(NULL));

    // display opening message
    std::cout << "\033[1;35;38mThis program generates a list of random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "then determines the largest number.";
    std::cout << std::endl;

    std::cout << std::endl;

    // displays random numbers and calculates average
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        int randomNumber = (rand_r() % (MIN_NUM, MIN_NUM + MAX_NUM));

        currentNumUser[counter] = randomNumber;
        std::cout << currentNumUser[counter];
        std::cout << "\033[1;35;34m added to the list at position " << counter;
        std::cout << std::endl;
    }

    maxNumUser = FindMaxValue(currentNumUser);
    std::cout << std::endl;
    std::cout << "\033[1;3;35mThe max value is: " << maxNumUser;
}
