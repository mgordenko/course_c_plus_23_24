#include "array_functions.h"
#include <iostream>

void print_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << *(arr + i) << " ";
  }
  std::cout << '\n';
}

void fill_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }
}
