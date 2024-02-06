#include <iostream>

int main() {
  int n = 5;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
    for (int j = 0; j < n; j++) {
      arr[i][j] = i + j;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << '\n';
  }
  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}