//
// Created by Майя Кораблина on 08/02/24.
//
#include <iostream>

std::string ExtractDigits(const std::string& s) {
    std::string ans = "";
    for (char c: s) {
        if (isdigit(c)) ans += c;
    }
    return ans;
}

int main()
{

    std::string s;
    std::cin >> s;
    std::cout << ExtractDigits(s);


    return 0;
}