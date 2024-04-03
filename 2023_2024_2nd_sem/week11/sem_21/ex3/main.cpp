

#include <fstream>
#include <iostream>
#include <string>
class Base {
 public:
  void display() {
    std::cout << "Display of Base\n";
  }
};
class Derived1 : public virtual Base {
};
class Derived2 : public virtual Base {
};
class FinalDerived : public Derived1, public Derived2 {
};

int main() {
  FinalDerived d;
  d.display();
  return 0;
}
