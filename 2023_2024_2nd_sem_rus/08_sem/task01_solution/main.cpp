#include <iostream>

/*

Дана строка.
1) Все гласные заменить большими буквами
2) Все гласные заменить *
3) Удалить все *

qwerty
qwErtY
qw*rt*
qwrt
*/

#include <algorithm>
#include <iostream>
#include <string>

bool isVowel(char ch) {
  ch = tolower(ch);
  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y';
}

int main() {
  std::string str;
  std::cout << "Введите строку: ";
  getline(std::cin, str);

  for (char &ch : str) {
    if (isVowel(ch)) {
      ch = toupper(ch);
    }
  }
  std::cout << "Гласные заменены на большие буквы: " << str << std::endl;

  for (char &ch : str) {
    if (isVowel(tolower(ch))) {
      ch = '*';
    }
  }
  std::cout << "Гласные заменены на '*': " << str << std::endl;

  str.erase(std::remove(str.begin(), str.end(), '*'), str.end());
  std::cout << "Удалены все '*': " << str << std::endl;

  return 0;
}
