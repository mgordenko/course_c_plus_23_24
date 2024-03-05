#include <fstream>
#include <iostream>
#include <vector>
// STL
/*
begin(): Returns an iterator pointing to the first element of the vector.
end(): Returns an iterator pointing to the position 
just beyond the last element of the vector (not the last element).
rbegin(), rend(): Return reverse iterators that 
move from the end to the beginning of the vector.
operator++ and operator--: Increment or decrement 
the iterator, moving it to the next or previous element respectively.
operator+ and operator-: Move the iterator forward or backward by
 a specified number of elements.
operator[]: Access the element pointed to by the iterator, 
with consideration for offset.
*/
int main() {
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  vec.push_back(50);
  std::cout << *vec.begin() << std::endl;
  std::cout << *(vec.begin() + 2) << std::endl;
  for (std::vector<int>::iterator it = vec.begin();
       it != vec.end(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  for (std::vector<int>::iterator it = vec.end() - 1; it != vec.begin() - 1;
       it--) {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  for (std::vector<int>::reverse_iterator it = vec.rbegin();
       it != vec.rend(); ++it) {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  std::cout << vec[3] << std::endl;
  return 0;
}
