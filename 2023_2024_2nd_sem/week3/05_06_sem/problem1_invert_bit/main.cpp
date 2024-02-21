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
// 15 2
// 1111 -> 1011 -> 11
// 0100
int main() {
  int a = 15, k = 2;
  // 1 ^ 1 = 0; 1 ^ 0 = 1; 0 ^ 1 = 1
  std::cout << (a ^ (1 << k)) << '\n';
  return 0;
}
