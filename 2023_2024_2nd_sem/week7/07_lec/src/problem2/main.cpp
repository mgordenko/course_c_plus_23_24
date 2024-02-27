#include <iostream>
#include <vector>

int main() {
  std::vector<int> v(3);
  v[0] = 10; v[1] = 12; v[2] = -9; v[3] = 10; v[4] = 12; v[5] = -9;
  v.pop_back();
  std::cout << v[v.size() - 1]  << '\n';
  //v.clear();
  std::cout << v.size() << '\n';
  v.insert(v.begin() + 1, 4);
  for (int i = 0; i < v.size(); i++) 
    std::cout << v[i] << ' ';
  std::cout << '\n';
  v.erase(v.begin() + 1, v.begin() + 3);
  for (int i = 0; i < v.size(); i++) 
    std::cout << v[i] << ' ';
  std::cout << '\n';
  // resize
  // swap
  // std::vector<int> v1(3, 3);
  // std::vector<int> v2(5, 5);
  // v1.swap(v2); v1 {5, 5, 5, 5, 5} v1 {3, 3, 3}

  v.emplace_back(10);

  // std::cout << v.capacity() << '\n';
  // v.push_back(6);
  // v.push_back(9);
  // std::cout << v.size() << '\n';
  // std::cout << v.capacity() << '\n';
  // v[0] = 10;




  // for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) 
  //   std::cout << *it << ' ';
  // std::cout << '\n';

  // for (auto it = v.rbegin(); it != v.rend(); ++it) 
  //   std::cout << *it << ' ';
  // std::cout << '\n';

  return 0;
}