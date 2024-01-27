#include <iostream>

/*
Написать функцию, которая использует указатели для обмена значениями двух переменных.

До обмена: a = 10, b = 20
После обмена: a = 20, b = 10
*/

#include <iostream>

int main() {
  int a = 10;
  int b = 12;
  int c = 14;
  int d = 16;
  std::cout << a << " " << &a << "\n";
  std::cout << b << " " << &b << "\n";
  std::cout << c << " " << &c << "\n";
  std::cout << d << " " << &d << "\n";
}