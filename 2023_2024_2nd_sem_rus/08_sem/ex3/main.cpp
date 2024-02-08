#include <iostream>
#include <string>

int main() {
  std::string s1 = "abc";
  std::string s2 = "def";
  std::cout << &s1 << '\n';
  std::cout << &s2 << '\n';
  s1 = s1 + s2;
  std::cout << &s1 << '\n';

  std::string s3 = "abc";
  std::string s4 = s3;
  std::cout << &s3 << '\n';
  std::cout << &s4 << '\n';
  std::cout << (s3 == s4) << '\n';// true, false
  std::cout << (s3.compare(s4)) << '\n';

  std::string int_str = "12345";
  std::string float_str = "123.45";

  int res0 = std::stoi(int_str);
  std::cout << res0 << '\n';
  return 0;
}