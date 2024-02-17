
  bool operator<(const Complex &other) const {
    return std::sqrt(std::pow(real, 2) + std::pow(imag, 2)) < std::sqrt(std::pow(other.real, 2) + std::pow(other.imag, 2));
  }