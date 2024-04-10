#include <iostream>
#include <vector>
#include <stdexcept>
#include <new>
#include <typeinfo>
#include <cstring>
#include <memory>
#include <cmath>

/*
Написать код для 10 исключений (См. пример)
 * */
int main() {
    try {
        std::vector<int> v(5);
        std::cout << v.at(10);
    } catch (const std::out_of_range&) {
        std::cout << "Exception: out_of_range\n";
    }


    return 0;
}
