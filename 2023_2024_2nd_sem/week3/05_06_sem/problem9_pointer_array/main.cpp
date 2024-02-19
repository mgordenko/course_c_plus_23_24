///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Count Elements
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input and
/// counts the number of elements in the array using pointers. Print the count.
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

    int* pointer = arr;
    int* last_pointer = (pointer + size - 1);

    std::cout << *pointer << ' ' << *last_pointer << '\n';
    int counter = 1;
    while (*pointer != *last_pointer) {
        counter += 1;
        *pointer = *(pointer++);
    }

    std::cout << counter;

    return 0;
}
