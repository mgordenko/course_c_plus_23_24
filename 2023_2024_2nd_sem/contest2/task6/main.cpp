#include <iostream>

int main() {
    int k;
    std::string n;
    std::cin >> k >> n;
    int rem = 0;
    for (char d : n) {
        int d_i = d - '0';
        rem = (rem * 10 + d_i) % k;
    }
    std::cout << rem;
    return 0;
}