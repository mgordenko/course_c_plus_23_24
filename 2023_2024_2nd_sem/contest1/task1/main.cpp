//
// Created by Майя Кораблина on 08/02/24.
//
#include <iostream>

int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2 || y2 == y1 || std::abs(x1 - x2) == std::abs(y1-y2)){
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}