#include <iostream>
#include <string>
#include <string_view>

int main() {
  std::string str = "Hello, world!";
  std::string_view sv(str);

  std::cout << sv << '\n';
  std::cout << sv.substr(0, 5) << '\n';
  std::cout << sv << '\n';

  return 0;
}