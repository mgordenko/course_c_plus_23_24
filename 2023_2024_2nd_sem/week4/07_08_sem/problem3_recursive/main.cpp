///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Sum digits
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes a number and
/// find sum of digits recursively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int sum_of_digits(int n){
    if (n == 0) return 0;
    int sum = n % 10;
    n = n / 10;
    sum += sum_of_digits(n);
    return sum;
}


int main()
{
    int n;
    std::cin >> n;
    std::cout << sum_of_digits(n);

    return 0;
}
