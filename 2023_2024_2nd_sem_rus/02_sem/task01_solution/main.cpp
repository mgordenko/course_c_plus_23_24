#include <iostream>

/*
Даны числа от 1 до n, одно пропущено. Найти его.
*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int sum = (n + 2) * (n + 1) / 2;
    for (;n > 0; --n) {
        int x;
        std::cin >> x;
        sum -= x;
    }
    std::cout << sum;
}