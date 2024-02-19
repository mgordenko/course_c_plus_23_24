///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Count Set Bits
/// \version    0.1.0
/// \date       24.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that reads an integer n from the standard input and determines
/// how many bits are set to 1 in its binary representation. Print the count of 
/// set bits.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "bitset"

int main()
{
    unsigned int n;
    int count = 0;
    std::cin >> n;
    std::bitset<32> b(n);
    for (int i = 0; i < 32; i ++) {
        if (b[i] == 1) count += 1;
    }
    std::cout << b << '\n' << count;


    return 0;
}
