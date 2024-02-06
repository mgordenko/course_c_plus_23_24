#include <iostream>
#include <string>
/**
прочитать строку, посчитать количество 
символов и количество слов
все слова разделены одним пробелом

qwerty 1234 hello
3 words
15 symbols
*/

int main() {
  std::string s;
  getline(std::cin, s);

  int count = 0;
  int words = 1;

  for (char c : s) {
    count++;
    if (c == ' ') {
      words++;
    }
  }

  std::cout << words << '\n';
  std::cout << count;

  return 0;
}