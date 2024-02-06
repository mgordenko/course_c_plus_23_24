#include "array_functions.h"

int main() {
  int n = 5;
  int *arr = new int[n];
  fill_array(arr, n, 10);
  print_array(arr, n);
  delete[] arr;
}
