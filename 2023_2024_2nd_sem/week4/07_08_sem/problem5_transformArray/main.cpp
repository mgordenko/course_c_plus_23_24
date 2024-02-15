///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Array Transformation
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void transformArray(int* arr, int size, int (*transform)(int))`
/// that applies a transformation function to each element of an array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int transform(int n) {
    return n * n;
}

void transformArray(int* arr, int size, int (*transform)(int)) {
    for (int i = 0; i < size; i ++) {
        arr[i] = transform(arr[i]);
    }
}

void print_array(int* arr, int size, char sep) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << sep;

    }
    std::cout << std::endl;
}


int main()
{
    int size;
    int n;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        std::cin >> n;
        arr[i] = n;
    }
    print_array(arr, size, ' ');
    transformArray(arr, size, transform);
    print_array(arr, size, ' ');
    return 0;
}
