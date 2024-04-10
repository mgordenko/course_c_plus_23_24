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
  void display() const override final {
    std::cout << "Base data: " << this->data << ", Extra data: " << extraData << std::endl;
  }
};

template<typename T>
class DerivedDerived : public Derived<T> {
 private:
  T extraExtraData;
 public:
  DerivedDerived(const T& value1, const T& value2) : Derived<T>(value1, value2), extraExtraData(value2) {}
};


int main() {
  Base<int> baseInt(1);
  Derived<int> derivedInt(1, 2);
  DerivedDerived<int> derivedDerivedDouble(1, 3);

  Base<int>* ptrInt = &baseInt;
  Base<int>* ptrDouble = &derivedInt;
  Base<int>* ptrDouble2 = &derivedDerivedDouble;

  ptrInt->display();
  ptrDouble->display();
  ptrDouble2->display();

  return 0;
}
