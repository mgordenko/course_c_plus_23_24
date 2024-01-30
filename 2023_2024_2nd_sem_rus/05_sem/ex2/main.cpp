#include <iostream>

int main() {
  int n = 5;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
  }
  std::cout << arr[0][0];

  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}