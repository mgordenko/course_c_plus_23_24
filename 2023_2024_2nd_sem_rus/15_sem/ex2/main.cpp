#include <iostream>
#include <string>
class Test {
  int *ptr;

 public:
  Test(int val) {
    ptr = new int(val);
  }
  ~Test() {
    delete ptr;
    std::cout << "Ресурсы освобождены" << std::endl;
  }
};

int main() {
  Test *obj = new Test(7);
  delete obj;
  return 0;
}