#include <iostream>
#include <string_view>

int main() {
  std::string_view str = "Hello, world!";

  str.remove_prefix(7);
  std::cout << str << std::endl;

  str.remove_suffix(1);
  std::cout << str << std::endl;

  for (char c : str) {
    std::cout << c << ' ';
  }
  std::cout << std::endl;

  return 0;
}
