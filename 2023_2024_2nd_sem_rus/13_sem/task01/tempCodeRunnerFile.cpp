StringWrapper(const StringWrapper &other) {
    data_ = new char[std::strlen(other.data_) + 1];
    std::strcpy(data_, other.data_);
  }
