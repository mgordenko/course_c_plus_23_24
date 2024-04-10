#include <chrono>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class SingletonExample {
 public:
  static SingletonExample instance = SingletonExample::getInstance();
  static SingletonExample getInstance() {
    return instance;
  }
 private:
  SingletonExample() { }
};

int main() {
  SingletonExample s1 = SingletonExample::getInstance();
  SingletonExample s2 = SingletonExample::getInstance();

  std::cout << &s1 << '\n';
  std::cout << &s2 << '\n';

  return 0;
}