///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Find Maximum Element
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input and
/// finds the maximum element using pointers. Print the maximum element.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
    int size;
    std::cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int* pointer = arr; // first element of array
    int max = *pointer;
    std::cout << *(pointer + 1); // shift to second element of array
    std::cout << ' ' << max << '\n';

    for(int i = 1; i < size; i++) {
        if(*(pointer + i) > max) {
            max = *(pointer + i);
        }
    }

    std::cout << max;

    return 0;
}