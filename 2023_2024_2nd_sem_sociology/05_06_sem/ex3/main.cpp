#include <iostream>

///
/// Write a program that reads an array of integers from the standard input and
/// finds the maximum element using pointers. Print the maximum element.
///
///
/// Write a program that reads an array of integers from the standard input and
/// counts (func) the even number of elements in the array using pointers. 
/// Print array (func) the count.
///

/*
Дан массив, состоящий из целых чисел. 
Известно, что числа упорядочены по неубыванию (то есть каждый следующий 
элемент не меньше предыдущего). Напишите программу, которая определит количество 
различных чисел в этом массиве.

Примеры
входные данные
5
1 1 2 2 3
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