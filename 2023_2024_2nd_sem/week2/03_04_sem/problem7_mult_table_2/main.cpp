////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 7: "Multiplication Table".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Program asks a user for two numbers, 1 <= (m, n) <= 8 and prints a rectangle
/// multiplication table aligning output at tab positions.
///
////////////////////////////////////////////////////////////////////////////////

// m (число строк) n (число слобцов) 3 4
//  1   2   3   4
//1 1   2   3   4
//2 2   4   6   8
//3 3   6   9   12
#include <iostream>
int main() {
  int n = 4, m = 5;
  //std::cin >> m >> n;
  std::cout << '\t';

  for (short i = 1; i < n + 1; ++i) {
    std::cout << i << '\t';
  }
  std::cout << '\n';

  for (size_t i = 1; i < m + 1; ++i) {
    for (size_t j = 0; j < n + 1; ++j) {
      if (j != 0)
        std::cout << i * j << '\t';
      else
        std::cout << i << '\t';
    }
    std::cout << '\n';
  }
  return 0;
}
