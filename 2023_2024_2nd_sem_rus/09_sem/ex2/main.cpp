#include <cmath>
#include <fstream>
#include <iostream>

class Complex {
 private:
  double real;
  double imag;

 public:
  Complex(double r = 0, double i = 0) : real(r), imag(i) {}

  Complex operator-() const {
    return Complex(-real, -imag);
  }

  Complex operator+(const Complex &other) const {
    return Complex(real + other.real, imag + other.imag);
  }

  Complex operator-(const Complex &other) const {
    return Complex(real - other.real, imag - other.imag);
  }

  Complex operator*(const Complex &other) const {
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
  }

  Complex operator/(const Complex &other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    return Complex((real * other.real + imag * other.imag) / denominator, (imag * other.real - real * other.imag) / denominator);
  }

  Complex &operator++() {
    ++real;
    return *this;
  }

  Complex operator++(int) {
    Complex temp = *this;
    ++(*this);
    return temp;
  }

  Complex &operator--() {
    --real;
    return *this;
  }

  Complex operator--(int) {
    Complex temp = *this;
    --(*this);
    return temp;
  }

  bool operator==(const Complex &other) const {
    return real == other.real && imag == other.imag;
  }

  bool operator!=(const Complex &other) const {
    return !(*this == other);
  }

  bool operator>(const Complex &other) const {
    return std::sqrt(std::pow(real, 2) + std::pow(imag, 2)) > std::sqrt(std::pow(other.real, 2) + std::pow(other.imag, 2));
  }

  bool operator<(const Complex &other) const {
    return std::sqrt(std::pow(real, 2) + std::pow(imag, 2)) < std::sqrt(std::pow(other.real, 2) + std::pow(other.imag, 2));
  }

  bool operator>=(const Complex &other) const {
    return !(*this < other);
  }

  bool operator<=(const Complex &other) const {
    return !(*this > other);
  }

  friend std::ostream &operator<<(std::ostream &out, const Complex &c);
  friend std::istream &operator>>(std::istream &in, Complex &c);
};

std::ostream &operator<<(std::ostream &out, const Complex &c) {
  out << c.real;
  if (c.imag >= 0) out << '+';
  out << c.imag << 'i';
  return out;
}

std::istream &operator>>(std::istream &in, Complex &c) {
  in >> c.real >> c.imag;
  return in;
}

int main() {
  Complex c1;
  std::ifstream inFile("input.txt");
  if (inFile) {
    inFile >> c1;
  }
  inFile.close();

  Complex c2(1.0, 1.0), c3 = c1 + c2, c4 = c1 - c2, c5 = c1 * c2, c6 = c1 / c2;
  c1++;
  --c2;

  std::cout << "Сумма: " << c3 << std::endl;
  std::cout << "Разность: " << c4 << std::endl;
  std::cout << "Произведение: " << c5 << std::endl;
  std::cout << "Частное: " << c6 << std::endl;
  std::cout << "После инкремента c1: " << c1 << std::endl;
  std::cout << "После декремента c2: " << c2 << std::endl;

  std::ofstream outFile("output.txt");
  if (outFile) {
    outFile << "Сумма: " << c3 << '\n';
    outFile << "Разность: " << c4 << '\n';
    outFile << "Произведение: " << c5 << '\n';
    outFile << "Частное: " << c6 << '\n';
    outFile << "После инкремента c1: " << c1 << '\n';
    outFile << "После декремента c2: " << c2 << '\n';
  }
  outFile.close();

  return 0;
}
