//
// Created by Майя Кораблина on 08/02/24.
//
#include "iostream"

int main()
{
    int v;
    int t;
    int a;
    std::cin >> v >> t;
    int pos = v * t;
    std::cout << ((pos % 109) + 109) % 109;
//    if (pos > 0){
//        std::cout << pos % 109;
//    }
//    else {
//        std::cout << ((pos % 109) + 109);
//    }
    return 0;
}
