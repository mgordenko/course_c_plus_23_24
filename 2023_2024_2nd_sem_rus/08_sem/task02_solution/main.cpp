#include <iostream>
#include <string>
#include <string_view>

/*
Напишите функцию, которая принимает на 
вход строку и определяет, является ли 
она палиндромом (читается одинаково с 
начала и с конца). Используйте 
std::string_view для эффективного 
сравнения символов на обоих концах строки 
без создания дополнительных копий.
*/

bool isPalindrome(const std::string &s) {
  std::string_view sv(s);
  size_t start = 0, end = sv.size() - 1;
  while (start < end) {
    if (sv[start] != sv[end]) {
      return false;
    }
    ++start;
    --end;
  }
  return true;
}

int main() {
  std::string input;
  std::cout << "Enter a string: ";
  std::cin >> input;
  if (isPalindrome(input)) {
    std::cout << input << " is a palindrome." << std::endl;
  } else {
    std::cout << input << " is not a palindrome." << std::endl;
  }
  return 0;
}
