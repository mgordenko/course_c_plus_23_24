#include <cstring>
#include <iostream>
/*
Реализовать класс StringWrapper, который:
Управляет строкой, выделенной динамически.
Включает конструктор по умолчанию, конструктор 
копирования, конструктор перемещения, деструктор, 
оператор присваивания копированием и оператор присваивания 
перемещением.
Имеет метод print(), выводящий строку на стандартный вывод.
*/

class StringWrapper {
 public:
  StringWrapper() {
    data_ = new char[1];
    *data_ = '\0';
  }

  StringWrapper(const char *other) {
    data_ = new char[std::strlen(other) + 1];
    std::strcpy(data_, other);
  }

  StringWrapper(const StringWrapper &other) {
    data_ = new char[std::strlen(other.data_) + 1];
    std::strcpy(data_, other.data_);
  }

  StringWrapper(StringWrapper &&other) noexcept {
    data_ = other.data_;
    other.data_ = nullptr;
  }
  // a = b
  StringWrapper &operator=(const StringWrapper &other) {
    if (this != &other) {
      delete[] data_;// !!!
      data_ = new char[std::strlen(other.data_) + 1];
      std::strcpy(data_, other.data_);
    }
    return *this;
  }
  StringWrapper &operator=(StringWrapper &&other) noexcept {
    if (this != &other) {
      delete[] data_;// !!!
      data_ = other.data_;
      other.data_ = nullptr;
    }
    return *this;
  }

  ~StringWrapper() {
    delete[] data_;
  }

  void print() const {
    if (data_ != nullptr)
      std::cout << data_ << std::endl;
    else
      std::cout << "null" << std::endl;
  }

 private:
  char *data_;
};
int main() {
  StringWrapper sw1;
  StringWrapper sw2("Hello, World!");
  StringWrapper sw3(sw2);
  StringWrapper sw3 = std::move(sw2);
  sw2.print();
  sw3.print();
  //sw1 = sw3;// присваивание копированием
  //StringWrapper sw4;
  //sw4 = std::move(sw3);// перемещение
  //sw4.print();
}
