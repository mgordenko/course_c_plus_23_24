#include <algorithm>
#include <initializer_list>
#include <iostream>

class VectorWrapper {
 public:
  VectorWrapper() : size_(0), capacity_(1), data_(new int[capacity_]) {}

  // v = {1,2,3}
  VectorWrapper(std::initializer_list<int> ilist) : size_(ilist.size()), capacity_(size_), data_(new int[capacity_]) {
    std::copy(ilist.begin(), ilist.end(), data_);
  }

  VectorWrapper(const VectorWrapper &other) : size_(other.size_),
                                              capacity_(other.capacity_), data_(new int[capacity_]) {
    std::copy(other.data_, other.data_ + size_, data_);
  }

  VectorWrapper(VectorWrapper &&other) noexcept : size_(other.size_),
                                                  capacity_(other.capacity_), data_(other.data_) {
    other.size_ = 0;
    other.capacity_ = 0;
    other.data_ = nullptr;
  }

  ~VectorWrapper() {
    delete[] data_;
  }

  VectorWrapper &operator=(const VectorWrapper &other) {
    if (this != &other) {
      delete[] data_;
      size_ = other.size_;
      capacity_ = other.capacity_;
      data_ = new int[capacity_];
      std::copy(other.data_, other.data_ + size_, data_);
    }
    return *this;
  }
  VectorWrapper &operator=(VectorWrapper &&other) noexcept {
    if (this != &other) {
      delete[] data_;
      size_ = other.size_;
      capacity_ = other.capacity_;
      data_ = other.data_;
      other.size_ = 0;
      other.capacity_ = 0;
      other.data_ = nullptr;
    }
    return *this;
  }

  void push_back(int value) {
    if (size_ == capacity_) {
      capacity_ *= 2;
      int *newData = new int[capacity_];
      std::copy(data_, data_ + size_, newData);
      delete[] data_;
      data_ = newData;
    }
    data_[size_++] = value;
  }

  void pop_back() {
    if (size_ > 0) {
      size_--;
    }
  }

  int &operator[](size_t index) {
    return data_[index];
  }

  void print() const {
    for (size_t i = 0; i < size_; i++) {
      std::cout << data_[i] << " ";
    }
    std::cout << std::endl;
  }

 private:
  size_t size_;
  size_t capacity_;
  int *data_;
};

int main() {
  VectorWrapper vw({1, 2, 3, 4, 5});
  vw.push_back(6);
  vw.print();// Должен вывести 1 2 3 4 5 6

  VectorWrapper vw2 = std::move(vw);
  vw2.print();// Должен вывести 1 2 3 4 5 6
  vw.print(); // Уже не должен выводить исходный вектор

  vw2.pop_back();
  vw2.print();// Должен вывести 1 2 3 4 5

  return 0;
}
