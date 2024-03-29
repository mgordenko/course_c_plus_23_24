#include <iostream>
/*
Дано число. Нужно инвертировать его k-бит.
14 2
3210
1110 -> 1010
10
*/
int main() {
  int n = 14, k = 2;
  std::cout << (n ^ (1 << k));
  //    1010
  //    0100
  //xor 1110
  // 1 xor 0 = 1; 1 xor 1 = 0; 0 xor 0 = 0
  // n >> 1 (14 = 1110 >> 1 = 7) // 2
  // << 1 (14 = 1110 << 1 = 11100 = 28) *2
}