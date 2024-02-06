#include <iostream>
void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}
bool less(int a, int b) {
  return a < b;
}

bool greater(int a, int b) {
  return a > b;
}

bool evenOdd(int a, int b) {
  return a % 2 == 1 && b % 2 == 0;
}

void bubbleSort(int *arr, int n, bool (*func)(int, int)) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (func(arr[j], arr[j + 1]))
        std::swap(arr[j], arr[j + 1]);
    }
  }
}
int main() {
  const int n = 5;
  int arr[n] = {10, 4, 3, 11, 8};
  bool (*funcs[])(int, int) = {less, greater, evenOdd};
  for (auto func : funcs) {
    bubbleSort(arr, n, func);
    printArray(arr, n);
  }
  return 0;
}
/*Создайте теперь массив ссылок на функции сравнения. 
И потом вызовите сортировку в массиве с каждой функцией*/