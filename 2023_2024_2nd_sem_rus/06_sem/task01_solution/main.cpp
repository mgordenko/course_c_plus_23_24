#include <iostream>
/// Напишем функцию
///`int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int))`
/// который фильтрует массив на основе функции-предиката
///и возвращает новый массив.

/*
arr = 10 5 14 23 9 81
filter(arr, n, n_size, n % 2 == 0)
10 14
*/
bool even(int a) {
  return a % 2 == 0;
}
void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++)
    std::cout << arr[i] << ' ';
  std::cout << '\n';
}
int *filter(int *arr, int size, int &newSize,
            bool (*filterFunc)(int)) {
  int *newArr = new int[size];
  newSize = 0;
  for (int i = 0; i < size; i++)
    if (filterFunc(arr[i]))
      newArr[newSize++] = arr[i];
  return newArr;
}
int main() {
  const int size = 6;
  int newSize = 0;
  int arr[size] = {12, 9, 10, 1, 7, 17};
  int *newArr = filter(arr, size, newSize, even);
  printArray(newArr, newSize);
  delete[] newArr;
  return 0;
}