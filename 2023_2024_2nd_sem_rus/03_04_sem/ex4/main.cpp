#include <iostream>
void increase(int a) {
  a *= 2;
  std::cout << "i0 " << a << " " << &a <<'\n';
}
void increas_by_link1(int& a) {
  a *= 2;
  std::cout << "i1 " <<  a << " " << &a <<'\n';
}
void increas_by_link2(int* a) {
  (*a) *= 2;
  std::cout << "i2 " <<  *a << " " << a <<'\n';
}
int main() {
  int val = 10;
  std::cout << val << " " << &val <<'\n';
  increase(val);
  std::cout << val << " " << &val <<'\n';
  increas_by_link1(val);
  std::cout << val << " " << &val <<'\n';
  increas_by_link2(&val);
  std::cout << val << " " << &val <<'\n';
}