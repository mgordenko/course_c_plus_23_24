#include <iostream>

int main() {
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    std::cout << "Initial values:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    std::cout << "Using pointers:" << std::endl;
    std::cout << "*ptr1: " << *ptr1 << std::endl;
    std::cout << "*ptr2: " << *ptr2 << std::endl;

    *ptr1 = 30;
    *ptr2 = 40;

    std::cout << "Updated values using pointers:" << std::endl;
    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;

    return 0;
}
