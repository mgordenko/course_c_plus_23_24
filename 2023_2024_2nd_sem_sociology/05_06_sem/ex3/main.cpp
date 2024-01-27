#include <iostream>

int main() {
  int n = 5;
  int* arr = new int[n];
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  std::cout << arr << "\n";
  for (int i = 0; i < n; i++) {
    std::cout << *(arr + i) << " ";
  }
  std::cout << "\n";
  delete[] arr;
}