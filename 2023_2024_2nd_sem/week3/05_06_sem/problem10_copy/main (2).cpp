///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Copy Array
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input,
/// creates a new array, copies the elements from the original array to the new
/// array using pointers, and then prints the new array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    int size;
    std::cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int new_arr[size];
    int* pointer_old = arr;
    int* pointer_new = new_arr;

    for (int i = 0; i < size; i++) {
        *(pointer_new + i) = *(pointer_old + i);
        std::cout << (pointer_new + i) << ' ';
    }
    std::cout << '\n';

    for (int i = 0; i < size; ++i) {
        std::cout << new_arr[i] << ' ';
    }



    return 0;
}
