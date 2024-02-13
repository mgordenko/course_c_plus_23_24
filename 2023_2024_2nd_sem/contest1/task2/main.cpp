//
// Created by Майя Кораблина on 08/02/24.
//

#include <iostream>
#include <string>

int main()
{
    // TODO: place your code starting from this line
    std::string s;
    int a;
    int count = 0;
    std::cin >> s;
    for (char c : s) {
        count += c - '0';
    }

    std::cout << count;
    return 0;
}
