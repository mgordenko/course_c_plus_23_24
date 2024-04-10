#include <iostream>

template<typename T>
class Pair {
 private:
  T first;
  T second;
 public:
  Pair(T f, T s) : first(f), second(s) {}
  T getFirst() const { return first; }
  T getSecond() const { return second; }
};

int main() {
  Pair<int> intPair(5, 10);
  Pair<double> doublePair(3.14, 6.28);

  std::cout << "Int Pair: (" << intPair.getFirst() << ", " << intPair.getSecond() << ")\n";
  std::cout << "Double Pair: (" << doublePair.getFirst() << ", " << doublePair.getSecond() << ")\n";

  return 0;
}
