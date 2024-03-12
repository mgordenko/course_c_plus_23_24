#include <iostream>
#include <vector>
#include <stdexcept>
#include <new>
#include <typeinfo>
#include <cstring>
#include <memory>
#include <cmath>

class MyBase {};
class MyDerived : public MyBase {};

int main() {
    try {
        std::vector<int> v(5);
        std::cout << v.at(10);
    } catch (const std::out_of_range&) {
        std::cout << "Exception: out_of_range\n";
    }

    try {
        std::string s;
        s.resize(s.max_size() + 1);
    } catch (const std::length_error&) {
        std::cout << "Exception: length_error\n";
    }

    try {
        std::stod("not_a_number");
    } catch (const std::invalid_argument&) {
        std::cout << "Exception: invalid_argument\n";
    }

    try {
        std::cout << std::pow(10, 1000);
    } catch (const std::overflow_error&) {
        std::cout << "Exception: overflow_error\n";
    }

    try {
        std::cout << std::pow(10, -1000);
    } catch (const std::underflow_error&) {
        std::cout << "Exception: underflow_error\n";
    }



    return 0;
}
