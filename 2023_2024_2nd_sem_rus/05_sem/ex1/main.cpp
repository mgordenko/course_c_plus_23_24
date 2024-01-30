#include "array_functions.cpp"

int main() {
  int n = 5;
  int *arr = new int[n];

  fill_array(arr, n);
  print_array(arr, n);

  delete[] arr;
}