//
// Created by Майя Кораблина on 08/02/24.
//

#include "iostream"

bool is_palindrome(std::string str) {
    std::string no_spaces = "";
    std::string reversed_string = "";
    for (char c : str) {
        if (c != ' ') {
            no_spaces += c;
        }
    }
    for (int i = no_spaces.length() - 1; i >= 0; i--) {
        reversed_string += no_spaces[i];
    }
//    std::cout << no_spaces << "\n" << reversed_string << "\n";
    if (no_spaces == reversed_string) return true;
    else return false;
}

int main(){
    std::string str;
    std::getline(std::cin, str);
    if (is_palindrome(str)) {
        std::cout << "yes";
    }
    else {
        std::cout << "no";
    }
    return 0;
}
