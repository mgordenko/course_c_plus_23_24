#include <iostream>

int main() {
    int a = 10;
    int* p_a1 = &a;
    int** p_a2 = &p_a1;
    int*** p_a3 = &p_a2;
    std::cout << p_a1 << " " << *p_a1 << '\n';
    std::cout << p_a2 << " " << *p_a2 << " " << **p_a2 << '\n';
    std::cout << p_a3 << " " << *p_a3 << " " << **p_a3 << " " << ***p_a3 << '\n';
}