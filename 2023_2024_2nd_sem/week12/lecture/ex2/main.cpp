#include <iostream>
#include <vector>

template<typename T>
class Stack {
 private:
  std::vector<T> elements;
 public:
  void push(const T& element) {
    elements.push_back(element);
  }

  T pop() {
    if (elements.empty()) {
      throw std::runtime_error("Stack is empty");
    }
    T element = elements.back();
    elements.pop_back();
    return element;
  }

  bool isEmpty() const {
    return elements.empty();
  }
};

int main() {
  Stack<int> intStack;
  Stack<std::string> stringStack;

  intStack.push(10);
  intStack.push(20);
  stringStack.push("Hello");
  stringStack.push("World");

  std::cout << "Popped from intStack: " << intStack.pop() << std::endl;
  std::cout << "Popped from stringStack: " << stringStack.pop() << std::endl;

  return 0;
}
