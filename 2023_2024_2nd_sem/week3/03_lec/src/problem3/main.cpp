#include <iostream>

int main() {
    // Part 1: static_cast
    int x = 10;
    double y = static_cast<double>(x);
    std::cout << "Part 1: static_cast" << std::endl;
    std::cout << "x: " << x << " (int)" << std::endl;
    std::cout << "y: " << y << " (double)" << std::endl;

    // Part 2: reinterpret_cast
    int* ptr = new int(42);
    long address = reinterpret_cast<long>(ptr);
    std::cout << "Part 2: reinterpret_cast" << std::endl;
    std::cout << "Address of ptr: " << address << std::endl;

    // Part 3: const_cast
    const int z = 100;
    int& ref = const_cast<int&>(z);
    ref = 200;
    std::cout << "Part 3: const_cast" << std::endl;
    std::cout << "z: " << z << " (const int)" << std::endl;
    std::cout << "ref: " << ref << " (int after const_cast)" << std::endl;

    delete ptr; // Clean up the dynamically allocated memory

    return 0;
}
