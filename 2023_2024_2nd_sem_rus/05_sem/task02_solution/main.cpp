#include <iostream>

/*
Напишите функцию fillSnakePattern, 
которая заполняет двумерный массив NxN 
змейкой, начиная с левого верхнего угла. 
Змейка заполняет массив значениями от 1 
до N^2. Выведите полученный массив.
*/
// 1   2   3   4
// 12 13  14   5
// 11 16  15   6
// 10  9   8   7

#include <iostream>

void SnakeFillArray(int **arr, int n) {
  int counter = 1, range = n;
  for (int k = 0; k <= (n + 1) / 2; k++) {
    for (int i = k; i < n - k - 1; i++) {
      arr[n - k - 1][n - k - 1 - i] = counter++;
    }
    for (int i = k; i < n - k - 1; i++) {
      arr[n - k - i - 1][k] = counter++;
    }
    for (int i = k; i < n - k - 1; i++) {
      arr[k][i + k] = counter++;
    }
    for (int i = k; i < n - k - 1; i++) {
      arr[i + k][n - k - 1] = counter++;
    }
  }
}

void PrintArray(int **arr, int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << std::endl;
  }
}

int main() {
  int n;
  std::cin >> n;
  int **numbers = new int *[n];
  for (int i = 0; i < n; i++) {
    numbers[i] = new int[n];
  }

  SnakeFillArray(numbers, n);
  PrintArray(numbers, n, n);

  for (int i = 0; i < n; i++) {
    delete numbers[i];
  }
  delete[] numbers;
  return 0;
}