#include <iostream>
#include <string>
#include <string_view>

int main() {
  std::string_view str = "abcdef qwerty std::string_view";

  size_t pos = str.find("qwerty");
  if (pos != std::string_view::npos) {
    std::cout << "Найдено на позиции: " << pos << std::endl;
  }

  // C++ 20
  // if (str.starts_with("abcdef")) {
  //   std::cout << "abcdef: " << std::endl;
  // }

  return 0;
}