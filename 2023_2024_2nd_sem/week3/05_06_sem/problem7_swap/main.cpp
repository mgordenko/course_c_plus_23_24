///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Swap Variables
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads two integers from the standard input and swaps
/// their values using pointers. Print the swapped values.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << a << ' ' << &a << '\n';
    std::cout << b << ' ' << &b << '\n';
    int* pointer_a = &a;
    int* pointer_b = &b;

    int temp = *pointer_a;
    *pointer_a = *pointer_b;
    *pointer_b = temp;

    std::cout << a << '\n' << b;

    return 0;
}

