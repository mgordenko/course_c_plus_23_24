#include <iostream>

template<typename T>
class Pair {
 private:
  T first;
  T second;
 public:
  static int count;
  Pair(T f, T s) : first(f), second(s) { count += 1;}
  T getFirst() const { return first; }
  T getSecond() const { return second; }
};
template<typename T> int Pair<T>::count = 0;
int main() {
  Pair<int> intPair(5, 10);
  Pair<int> intPair2(5, 10);
  Pair<double> doublePair(3.14, 6.28);
  std::cout << Pair<int>::count << '\n';
  std::cout << Pair<double>::count << '\n';
  std::cout << "Int Pair: (" << intPair.getFirst() << ", "
            << intPair.getSecond() << ")\n";
  std::cout << "Double Pair: (" << doublePair.getFirst() << ", "
            << doublePair.getSecond() << ")\n";

  return 0;
}
