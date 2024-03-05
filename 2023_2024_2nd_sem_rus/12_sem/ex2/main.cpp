#include <fstream>
#include <iostream>
#include <vector>
// STL
/*
begin(): Возвращает итератор, указывающий на первый элемент вектора.
end(): Возвращает итератор, указывающий на позицию, 
следующую за последним элементом вектора (не на последний элемент).
rbegin(), rend(): Возвращают обратные итераторы, которые 
перемещаются от конца к началу вектора.
operator++ и operator--: Инкрементируют или декрементируют 
итератор, перемещая его к следующему или предыдущему элементу соответственно.
operator+ и operator-: Перемещают итератор вперед или назад на
 заданное количество элементов.
operator[]: Доступ к элементу, на который указывает итератор, 
с учетом смещения.
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
  for (std::vector<int>::iterator it = vec.end() - 1;
       it != vec.begin() - 1;
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
  std::cout << *(vec.begin() + 3) << std::endl;
  std::cout << vec.at(3) << std::endl;
  return 0;
}
