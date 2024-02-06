#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  int count = 0;
  for (auto c : str) {
    if (c == 'o') {
      count++;
    }
  }
  std::cout << count;
  return 0;
}