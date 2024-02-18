////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 4: "Some functions for dealing with strings".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Try to use functions for dealing with strings:
/// 1) strcmp, strlen for c-strings;
/// 2) string:: size(), length(), operator<, operator+, operator= etc for
///    std::string-s.
///
////////////////////////////////////////////////////////////////////////////////

#include "iostream"
#include "cstring"
#include "string"
const int MAX_CHARS = 255;

int main()
{
    char c_str_1[MAX_CHARS];
    char c_str_2[MAX_CHARS];
    std::string str_1;
    std::string str_2;
    std::cout << "c-strings" << '\n';
    std::cin >> c_str_1 >> c_str_2;
    std::cout << "res of comparing c_str_1 and c_str_2: " << strcmp(c_str_1, c_str_2) << '\n';
    std::cout << "length of c_str_1: " << strlen(c_str_1) << '\n';
    std::cout << "length of c_str_2: " << strlen(c_str_2) << '\n';

    std::cout << "std::string-s" << '\n';
    std::cin >> str_1 >> str_2;
    std::cout << "size of str_1: " << str_1.size() << '\n';
    std::cout << "size of str_2: " << str_2.size() << '\n';
    std::cout << "length of str_1: " << str_1.length() << '\n';
    std::cout << "length of str_2: " << str_2.length() << '\n';
    std::cout << str_1 + str_2 << '\n';


    return 0;
}
