#include <iostream>

int main() {
  long a = 10;
  std::cout << a << " " << &a << '\n';
  std::cout << a << " " << *&a << '\n';
  long* p_a = &a;
  std::cout << *(p_a + 1) << " " << (p_a + 1) << "\n";
  std::cout << *(p_a + 2) << " " << (p_a + 2) << "\n";
  std::cout << *(p_a + 3) << " " << (p_a + 3) << "\n";
}