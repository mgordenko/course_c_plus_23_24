#include <iostream>
#include <string_view>

void print_length1(std::string sv) {
  std::cout << "Длина строки: " << sv.length() << std::endl;
  std::cout << "Адрес: " << &sv << std::endl;
}

void print_length2(std::string_view sv) {
  std::cout << "Длина строки: " << sv.length() << std::endl;
  std::cout << "Адрес: " << &sv << std::endl;
}

int main() {
  std::string str = "Пример строки";
  std::cout << "Адрес: " << &str << std::endl;
  print_length1(str);
  std::string_view sv = str;
  print_length2(sv);

  return 0;
}
