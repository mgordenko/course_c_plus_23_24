#include <fstream>
#include <iostream>
#include <vector>
class DynamicArray {
 public:
  DynamicArray(size_t size) : size_(size), data_(new int[size]) {}
  // DynamicArray(size_t size) {
  //   size_ = size;
  //   data_ = new int[size];
  // }
  DynamicArray(DynamicArray &&other) noexcept {
    size_ = other.size_;
    data_ = other.data_;
    other.size_ = 0;
    other.data_ = nullptr;
  }
  ~DynamicArray() {
    delete[] data_;
  }
  DynamicArray(const DynamicArray &) = delete;
  DynamicArray &operator=(const DynamicArray &) = delete;
  //private:
  size_t size_;
  int *data_;
};
int main() {
  DynamicArray d1 = DynamicArray(10);
  std::cout << d1.size_ << '\n';// 10
  std::cout << d1.data_ << '\n';// _ _ _ _
  DynamicArray d2 = std::move(d1);
  std::cout << d1.size_ << '\n';// 0
  std::cout << d1.data_ << '\n';// null
  std::cout << d2.size_ << '\n';// 10
  std::cout << d2.data_ << '\n';// _ _ _ _
  return 0;
}
