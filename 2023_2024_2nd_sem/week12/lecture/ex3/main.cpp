#include <iostream>
#include <string>

template<typename T>
class Base {
 protected:
  T data;
 public:
  Base(const T& value) : data(value) {}
  void display() const {
    std::cout << "Base data: " << data << std::endl;
  }
};
template<typename T, typename D>
class Derived : public Base<D> {
 private:
  T extraData;
 public:
  Derived(const D& value1, const T& value2)
      : Base<D>(value1), extraData(value2) {}
  void display() const {
    std::cout << "Base data: " << this->data
              << ", Extra data: " << extraData << std::endl;
  }
};

int main() {
  Derived<int, int> derivedInt(100, 200);
  Derived<double, std::string> derivedDouble("abc", 3.14);

  derivedInt.display();
  derivedDouble.display();

  return 0;
}
