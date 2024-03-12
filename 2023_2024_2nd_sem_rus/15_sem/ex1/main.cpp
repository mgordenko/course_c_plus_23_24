#include <fstream>
#include <iostream>
#include <memory> 

class Example {
public:
    Example() { std::cout << "Example created\n"; }
    ~Example() { std::cout << "Example destroyed\n"; }
};


int main() {
  std::shared_ptr<Example> ptr = std::make_shared<Example>();
  std::shared_ptr<Example> ptr2 = ptr; 
  std::shared_ptr<Example> ptr2 = std::move(ptr);
  return 0;
}
