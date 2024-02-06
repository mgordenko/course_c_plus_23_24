#include <iostream>
/*
Создайте двумерный массив и заполните его по 
следующим правилам: Числа, стоящие в строке 0 
или в столбце 0 равны 1 (A[0][j]=1, A[i][0]=1). 
Для всех остальных элементов массива 
A[i][j]=A[i-1][j]+A[i][j-1], 
то есть каждый элемент равен сумме двух элементов, 
стоящих слева и сверху от него.

Пример
1 1 1 
1 2 3 
1 3 6 
*/

#include <iostream>

int main() {
  int n = 5;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n];
  }
  for (int j = 0; j < n; j++) {
    arr[0][j] = 1;
  }
  for (int j = 0; j < n; j++) {
    arr[j][0] = 1;
  }
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
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