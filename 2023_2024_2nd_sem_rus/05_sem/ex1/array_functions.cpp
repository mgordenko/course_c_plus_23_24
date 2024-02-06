#include "array_functions.h"
#include <iostream>

void fill_array(int *arr, int n) {
  for (int i = 0; i < n; ++i) {
    arr[i] = i + 1;
  }
}
void fill_array(int *arr, int n, int k) {
  for (int i = 0; i < n; ++i) {
    arr[i] = k;
  }
}
void print_array(int *arr, int n) {
  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << ' ';
  }
  std::cout << '\n';
}