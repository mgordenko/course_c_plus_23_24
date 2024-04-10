#include <iostream>
#include <vector>

class Base {
 protected:
  int data;
 public:
  Base(const int& value) : data(value) {}
  virtual void display() {
    std::cout << data << '\n';
  }
  virtual ~Base() {}
};

class Derived : public Base {
 private:
  int extraData;
 public:
  Derived(const int& value1, const int& value2) : Base(value1), extraData(value2) {}
  void display() override {
    std::cout << data << ' ' << extraData << '\n';
  }
};

int main() {
  std::vector<Base*> v;
  std::vector<Base> v2;
  Derived d(1, 1);
  Base b(1);
  v.push_back(&d);
  v.push_back(&b);
  v2.push_back(d);
  v2.push_back(b);
  v[0]->display();
  v[1]->display();
  v2[0].display();
  v2[1].display();
  return 0;
}
