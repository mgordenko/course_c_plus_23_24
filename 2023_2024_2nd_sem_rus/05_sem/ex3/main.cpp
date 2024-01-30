#include <iostream>

int main() {
  int n = 10;
  int m = 0;
  // &&
  // &
  // and
  if ((m != 0) & (n / m > 2)) {
    std::cout << n / m;
  } else {
    std::cout << "No";
  }
  std::cout << (10 & 12) << '\n';
  // 1010
  // 1100
  // 1000 = 8
  // 1110 = 14
}