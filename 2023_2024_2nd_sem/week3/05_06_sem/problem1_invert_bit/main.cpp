///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Toggle Bit
/// \version    0.1.0
/// \date       24.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n and a position k as input. The program
/// should toggle (invert) the k-th bit of the integer n (i.e., change 0 to 1 and 
/// 1 to 0) and print the resulting number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <bitset>
int main()
{
    unsigned int n, k;
    std::cin >> n >> k;
    std::bitset<32> b1(n);
    n ^= (1u << k);
    std::bitset<32> b2(n);
    std::cout << b1 << '\n' << b2;
    return 0;
}
