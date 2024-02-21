///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Pointers - Count Elements
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that reads an array of integers from the standard input and
/// counts the number of elements in the array using pointers. Print the count.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

void plus100(int *arr, int n) {
  for (int i = 0; i < 10; i++)
    arr[i] += 100;
}

int main() {
  int *arr = new int[10];
  for (int i = 0; i < 10; i++)
    arr[i] = i * i;
  for (int i = 0; i < 10; i++)
    std::cout << arr[i] << ' ';
  plus100(arr, 10);
  std::cout << '\n';
  for (int i = 0; i < 10; i++)
    std::cout << arr[i] << ' ';
  return 0;
}
