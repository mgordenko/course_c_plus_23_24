///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Bit Manipulation - Bitwise Complement
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes an integer n as input and performs bitwise complement
/// (inverts all bits) on it. Print the resulting number in binary and decimal forms.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int main()
{
    unsigned int n;
    std::cin >> n;
    std::bitset<32> b(n);
    bool flag = false;
    std::cout << n << '\n' << b << '\n';
    for (int i = 31; i >= 0; i--) {
        if (b[i] == 1) {
            flag = true;
        }

        if (flag) {
            if (b[i] == 1) {
                b[i] = 0;
            }
            else b[i] = 1;
        }


    }
    std::cout << b << '\n' << b.to_ulong();


    return 0;
}
