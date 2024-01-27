#include <iostream>

/*
Описание задачи: Написать функцию, которая использует указатель на функцию для выполнения арифметических операций.

Входные данные: Два числа (например, 10 и 5) и операция (например, сложение).
Сумма: 15
Разность: 5
Произведение: 50
Деление: 2
*/

#include <iostream>

int diff_numb_count(int* arr, int n) {
  int counter = 1;
  for (int i = 1; i < n; i++) {
    if (*(arr + i) != *(arr + i - 1)) {
      counter++;
    }
  }
  return counter;
}

int main() {
  int n;
  std::cin >> n;
  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }
  std::cout << diff_numb_count(arr, n);
  delete[] arr;
}