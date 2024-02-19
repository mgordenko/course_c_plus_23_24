///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Set Bit
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n and a position k as input. The program
/// should set (change to 1) the k-th bit of the integer n and print the resulting
/// number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    unsigned int n, k;
    std::cin >> n >> k;
    std::bitset<32> b(n);
    std::cout << n << '\n' << b << '\n';
    b[k] = 1;
    std::cout << b << '\n' << b.to_ulong();

    return 0;
}
