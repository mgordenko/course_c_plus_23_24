#include <iostream>
#include <string>

#include <iostream>

class Complex {
 private:
  double real;
  double imag;

 public:
  Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

  Complex operator+() const {
    return *this;
  }

  Complex operator-() const {
    return Complex(-real, -imag);
  }

  bool operator==(const Complex &rhs) const {
    return real == rhs.real && imag == rhs.imag;
  }

  bool operator!=(const Complex &rhs) const {
    return !(*this == rhs);
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
  std::cout << "Enter real part: ";
  in >> c.real;
  std::cout << "Enter imaginary part: ";
  in >> c.imag;
  return in;
}

int main() {
  Complex c1(5.0, 3.0);
  Complex c2;
  std::cin >> c2;
  //Complex sum = c1 + c2;
  //std::cout << sum << '\n';
  return 0;
}