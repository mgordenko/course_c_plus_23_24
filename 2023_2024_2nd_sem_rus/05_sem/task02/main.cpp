#include <iostream>

/*
Напишите функцию fillSnakePattern, 
которая заполняет двумерный массив NxN змейкой, 
начиная с левого верхнего угла. Змейка заполняет 
массив значениями от 1 до N^2. Выведите 
полученный массив.

4
1   2   3   4
8   7   6   5
9   10  11  12
16  15  14  13

1   8   9   16
2   7   10  15
3   6   11  14
4   5   12  13
*/

int main() {
  int n = 5;
  int **arr = new int *[n];
  for (int i = 0; i < n; ++i) {
    arr[i] = new int[n];
  }
  int num = 1;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0)
      for (int j = 0; j < n; ++j)
        arr[j][i] = num++;
    else
      for (int j = n - 1; j >= 0; --j)
        arr[j][i] = num++;
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << arr[i][j] << ' ';
    }
    std::cout << '\n';
  }
  for (int i = 0; i < n; ++i) {
    delete[] arr[i];
  }
  delete[] arr;
}