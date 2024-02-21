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

void swap1(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main() {
  int el1 = 5, el2 = 10;
  std::cout << el1 << ' ' << el2 << '\n';
  swap1(&el1, &el2);
  std::cout << el1 << ' ' << el2 << '\n';
  return 0;
}
