#include <algorithm>
#include <iostream>
#include <string>
#include <string_view>
#include <unordered_map>

/*
Напишите функцию, которая принимает на
 вход две строки и определяет, являются ли
  они анаграммами (строки, составленные из 
  одних и тех же символов с учетом регистра). 
  Используйте std::string_view для сравнения
   символов без создания копий строк.
*/

bool areAnagrams(std::string_view s1, std::string_view s2) {
  std::string_view sv1(s1), sv2(s2);
  if (sv1.size() != sv2.size()) {
    return false;
  }

  std::unordered_map<char, int> charCountMap;
  for (auto ch : sv1) {
    ++charCountMap[ch];
  }

  for (auto ch : sv2) {
    if (charCountMap.find(ch) == charCountMap.end() || --charCountMap[ch] < 0) {
      return false;
    }
  }

  return true;
}

int main() {
  std::string str1, str2;
  std::cout << "Enter first string: ";
  std::cin >> str1;
  std::cout << "Enter second string: ";
  std::cin >> str2;

  if (areAnagrams(str1, str2)) {
    std::cout << "The strings are anagrams." << std::endl;
  } else {
    std::cout << "The strings are not anagrams." << std::endl;
  }

  return 0;
}
