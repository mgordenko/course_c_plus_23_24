////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem 3: "Reading text strings using getline".
/// \author     Sergey Shershakov
/// \version    0.1.0
/// \date       19.01.2021
///             This code is for educational purposes of the course "Introduction
///             to programming" provided by the Faculty of Computer Science
///             at the Higher School of Economics.
///
/// Train reading text string with spaces and other special symbol using
/// cin.getline() for c-strings and std::getline() for std::string-s.
/// Then, consider the “read lines until first empty line” idiom.
///
////////////////////////////////////////////////////////////////////////////////

#include "iostream"
#include "cstring"

const int MAX_CHARS = 255;

int main()
{
    char c_str[MAX_CHARS];
    std::string str;
    std::cout << "c-strings" << '\n';
    while (std::cin.getline(c_str, MAX_CHARS) && strcmp(c_str, "") != 0);
    std::cout << "std::string-s" << '\n';
    while (std::getline(std::cin, str) && !str.empty());
    return 0;
}
