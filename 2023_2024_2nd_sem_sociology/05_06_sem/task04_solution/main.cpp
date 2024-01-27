/*
Описание задачи: Написать функцию, 
которая использует указатель на функцию 
для выполнения арифметических операций.

Входные данные: Два числа (например, 10 и 5) 
и операция (например, сложение).
Сумма: 15
Разность: 5
Произведение: 50
Деление: 2
*/

#include <iostream>

int add(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    return a / b;
}
int multiply(int a, int b) {
    return a * b;
}

int calculate(int a, int b, int (*op)(int, int)) {
    return op(a, b);
}

int main() {
    int (*op)(int, int) = add;
    std::cout << op(10, 20) << '\n';
    std::cout << calculate(10, 20, minus) << '\n';
    std::cout << calculate(10, 20, add) << '\n';
    std::cout << calculate(100, 20, divide) << '\n';
    std::cout << calculate(10, 20, multiply) << '\n';
}