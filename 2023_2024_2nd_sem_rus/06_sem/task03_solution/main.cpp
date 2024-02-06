#include <iostream>
// дана строка, перевернуть её.
// qwerty - ytrewq
// дана строка, перевернуть её.
int main1() {
  std::string str;
  std::cin >> str;
  for (int i = str.length() - 1; i >= 0; --i) {
    std::cout << str[i];
  }
  // 012345
  // qwerty
}

int main2() {
  std::string s = "Hello";
  int len = s.length();
  int n = len - 1;
  for (int i = 0; i < (len / 2); i++) {
    //s[i] = s[n];
    std::swap(s[i], s[n]);
    n = n - 1;
  }
  std::cout << s << std::endl;
}
#include <algorithm>
int main3() {
  std::string s = "Hello";
  int len = s.length();
  std::reverse(s.begin() + 1, s.end() - 1);
  std::cout << s << std::endl;
}

int main() {
  std::string s;
  std::getline(std::cin, s);
  s.insert(1, "Hello");
  std::cout << s << std::endl;
}