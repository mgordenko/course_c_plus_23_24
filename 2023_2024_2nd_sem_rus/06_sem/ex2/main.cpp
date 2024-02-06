#include <iostream>
#include <string>
// '\0'
// дана строка, перевернуть её.
// qwerty - ytrewq
int main() {
  std::string message1 = "hello";
  // 'a' - char; "a" - string
  std::string message3("hello");

  std::cout << message1 << '\n';
  std::cout << message3 << '\n';
  int count = 0;
  for (char c : message1) {
    if (c == 'l')
      count += 1;
  }
  std::cout << count;
  return 0;
}