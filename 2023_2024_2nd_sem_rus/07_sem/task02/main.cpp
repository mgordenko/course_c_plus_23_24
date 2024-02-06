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

int main() {
  return 0;
}