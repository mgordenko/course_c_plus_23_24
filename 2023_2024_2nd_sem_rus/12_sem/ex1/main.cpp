#include <fstream>
#include <iostream>
#include <vector>
// STL
int main() {
  std::vector<int> vec;
  vec.push_back(10);// O(1)
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  vec.push_back(50);
  std::cout << "Первый элемент: " << vec[0] << std::endl;
  std::cout << "Размер: " << vec.size() << std::endl;
  std::cout << "Емкость: " << vec.capacity() << std::endl;
  vec.pop_back();
  std::cout << "Размер: " << vec.size() << std::endl;
  std::cout << "Емкость: " << vec.capacity() << std::endl;
  for (int i = 0; i < vec.size(); i++) {
    std::cout << "Элемент " << i << ": " << vec[i] << std::endl;
  }
  return 0;
}
