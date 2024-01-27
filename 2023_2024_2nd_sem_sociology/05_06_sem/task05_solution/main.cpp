/*
Написать сортировку пызурьком.
Должна быть функция bubble_sort, которая 
принимает массив и ссылку на фукнцию для
сравнения элементов (попробовать по возрастанию,
по убыванию)
*/

#include <iostream>
#include <algorithm>

bool greater(int a, int b) {
    return a < b;
}

bool less(int a, int b) {
    return a > b;
}

bool even_odd(int a, int b) {
    return a % 2 == 0 and b % 2 == 0 or a % 2 == 0 and b % 2 != 0;
}

void bubble_sort(int arr[], int n, bool (*op)(int, int)) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (op(arr[j], arr[j + 1])) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n = 5;
    int arr[] = {9, 0, 3, 4, 1};
    bubble_sort(arr, n, greater);
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << '\n';
    bubble_sort(arr, n, less);
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << '\n';
    bubble_sort(arr, n, even_odd);
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
}