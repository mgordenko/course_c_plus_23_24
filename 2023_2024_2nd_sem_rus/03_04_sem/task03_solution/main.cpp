/*
Описание задачи: Написать функцию, которая переворачивает
массив с использованием указателей.

Входные данные: Массив чисел (например, [1, 2, 3, 4, 5]).
5 4 3 2 1 
*/
#include <iostream>

void my_reserve(int* arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;
    }
}
int main() {
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> *(arr + i); //arr[i]
    }
    my_reserve(arr, n);
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << '\n';
    delete[] arr;
}