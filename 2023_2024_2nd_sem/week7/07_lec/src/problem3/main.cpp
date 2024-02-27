#include <iostream>
#include <vector>

struct MyStruct {
  private:
    int value;
  public:
    MyStruct(int val = 0): value(val) {
      std::cout << "Constructor " << value << std::endl;
    }
};

int main() {
  std::vector<MyStruct> vec(2);
  vec.push_back(MyStruct(10));
  vec.emplace_back(20);
  return 0;
}