#include <iostream>
#include <string>
/**
написать сортировку по основанию 256
function radixSort(int[] A):
     for i = 1 to m               
         for j = 0 to k - 1                           
             C[j] = 0                                  
         for j = 0 to n - 1
             d = digit(A[j], i)
             C[d]++
         count = 0
         for j = 0 to k - 1
             tmp = C[j]
             C[j] = count
             count += tmp
         for j = 0 to n - 1
             d = digit(A[j], i)                             
             B[C[d]] = A[j]            
             C[d]++
         A = B*/

union IntBytes {
  int value;
  unsigned char bytes[sizeof(int)];
};
void radixSort(int *arr, int n) {
  const int BITS_PER_BYTE = 8;
  const int BASE = 256;
  const int INT_SIZE = 4;
  int *output = new int[n];
  for (int byteIndex = 0; byteIndex < INT_SIZE; ++byteIndex) {
    int *count = new int[BASE];
    for (int i = 0; i < BASE; ++i)
      count[i] = 0;
    for (int i = 0; i < n; i++) {
      IntBytes item;
      item.value = arr[i];
      count[item.bytes[byteIndex]]++;
    }
    for (int i = 1; i < BASE; ++i) {
      count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; --i) {
      IntBytes item;
      item.value = arr[i];
      output[--count[item.bytes[byteIndex]]] = arr[i];
    }
    for (int i = 0; i < n; ++i) {
      arr[i] = output[i];
    }
    delete[] count;
  }
  delete[] output;
}
int main() {
  int arr[7] = {101112, 456, 131415, 161718, 123, 789, 192021};
  radixSort(arr, 7);
  for (int i = 0; i < 7; ++i)
    std::cout << arr[i] << " ";
  return 0;
}