#include <iostream>

/*
Написать функцию, которая использует указатели для обмена значениями двух переменных.

До обмена: a = 10, b = 20
После обмена: a = 20, b = 10
*/
void my_swap1(int& el1, int& el2) {
    int temp = el1;
    el1 = el2;
    el2 = temp;
}
void my_swap2(int* el1, int* el2) {
    int temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}
// обменять значения без использования третьей переменной
void my_swap3(int& el1, int& el2) {
    el1 = el1 + el2;
    el2 = el1 - el2; // ((el1 + el2) - el2)
    el1 = el1 - el2; // ((el1 + el2) - el1)
}
void my_swap4(int& el1, int& el2) {
    el1 = el1 ^ el2;
    el2 = el1 ^ el2; 
    el1 = el1 ^ el2;
}
int main() {
  int a = 10, b = 20;
  std::cout << "before " << a << " " << b << '\n';
  my_swap1(a, b);
  std::cout << "after 1 " << a << " " << b << '\n';
  my_swap2(&a, &b);
  std::cout << "after 2 " << a << " " << b << '\n';
  my_swap3(a, b);
  std::cout << "after 3 " << a << " " << b << '\n';
  my_swap4(a, b);
  std::cout << "after 4 " << a << " " << b << '\n';
}