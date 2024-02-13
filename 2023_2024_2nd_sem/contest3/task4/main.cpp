//
// Created by Майя Кораблина on 08/02/24.
//

#include "iostream"

int main()
{
    int n;
    std::cin >> n;
    float num = 0.0;
    for (int i = 2; i < n + 1; i = i + 2){
        num -= 1.0 / i;
    }
    for (int j = 1; j < n + 1; j = j + 2){
        num += 1.0 / j;
    }
    std::cout << num;
    return 0;
}