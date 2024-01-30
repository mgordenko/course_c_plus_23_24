/*
Дан набор чисел. Есть повторы.
Нужно найти число, которое встречается один раз.
*/

#include <iostream>
int main() {
  int n;
  std::cin >> n;
  int y;
  int x = 0;
  for (int i = 0; i < n; i ++) {
    std::cin >> y;
    x ^= y;
  }
  std::cout << x;
}