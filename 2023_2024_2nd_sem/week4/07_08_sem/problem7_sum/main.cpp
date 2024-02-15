///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Sum of Numbers
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a variadic function `int sum(int count, ...)` that returns the sum of 
/// 'count' numbers.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

void print_array(std::vector<int> arr, int size, char sep) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << sep;

    }
    std::cout << std::endl;
}

int sum(int n){
    return n;
}

template <typename... Args>
int sum(int count, Args... args){
    std::vector<int> vec(sum(args...));
    std::cout << vec[3] << 1;
    return 0 + sum(args...);
}

int main()
{
    int n;
    std::cin >> n;
    sum(7, 7, 3, 5, 5, 6, 0);
    return 0;
}
