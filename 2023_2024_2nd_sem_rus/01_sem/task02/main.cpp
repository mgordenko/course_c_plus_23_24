#include <iostream>
#include "calculator.h"

int main() {
  std::cout << plus(10, 20) << std::endl;
  std::cout << minus(10, 20) << std::endl;
  std::cout << divide(100, 20) << std::endl;
  std::cout << multiply(10, 20) << std::endl;
  return 0;
}
