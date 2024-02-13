//
// Created by Майя Кораблина on 08/02/24.
//
#include <iostream>

int main()
{
    int i, j;
    char sep = '\t';
    std::cin >> i >> j;
    for (int n = 1; n <= i; n++) {
        std::cout << sep << n;
    }
    std::cout << '\n';
    for (int n = 1; n <= i; n++) {
        std::cout << n;
        for (int m = 1; m <= i; m++) {
            std::cout << sep << (n * m) % j;
        }
        std::cout << '\n';
    }
    return 0;
}