#include <iostream>

template<typename T>
class Base {
 protected:
  T data;
 public:
  Base(const T& value) : data(value) {}
  virtual void display() const {
    std::cout << "Base data: " << data << std::endl;
  }
  virtual ~Base() {}
};

template<typename T>
class Derived : public Base<T> {
 private:
  T extraData;
 public:
  Derived(const T& value1, const T& value2) : Base<T>(value1), extraData(value2) {}
  void display() const override {
    std::cout << "Base data: " << this->data << ", Extra data: " << extraData << std::endl;
  }
};

int main() {
  Derived<int> derivedInt(100, 200);
  Derived<double> derivedDouble(3.14, 2.71);

  Base<int>* ptrInt = &derivedInt;
  Base<double>* ptrDouble = &derivedDouble;

  ptrInt->display();
  ptrDouble->display();

  return 0;
}
