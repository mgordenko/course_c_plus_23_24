#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 || j == 0) {
        arr[i][j] = 1;
      } else {
        arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << '\n';
  }
  for (int i = 0; i < n; i++) {
    delete[] arr[i];
  }
  delete[] arr;
}