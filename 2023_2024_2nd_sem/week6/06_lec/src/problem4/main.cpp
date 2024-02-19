#include <iostream>
#include <fstream>
#pragma pack(push, 1)

struct Complex {
	private:
	  	double real, imag; // 8 + 8
		int a, b;// c, d; // 4 + 4
		char e; // 1

	public:
		Complex(double r, double i) {
			real = r;
			imag = i;
		}
		void print() {
			std::cout << real << "+" << imag << "i" << '\n';
		}
		Complex operator-() const {
			return Complex(-real, -imag);
		}

		Complex& operator++() {
			real += 50;
			return *this;
		}
		Complex& operator++(int) {
			real += 100;
			return *this;
		}
		Complex operator+(const Complex &other) const {
			return Complex(real + other.real, imag + other.imag);
		}
		Complex operator-(const Complex &other) const {
			return Complex(real - other.real, imag - other.imag);
		}
		bool operator==(const Complex &other) const {
			return real == other.real && imag == other.imag;
		}
		bool operator!=(const Complex &other) const {
			// return real != other.real || imag != other.imag;
			return !(*this == other);
		}
		friend std::ostream& operator << (std::ostream &out, const Complex &c);
		friend std::istream& operator >> (std::istream &in, Complex &c);
};

std::ostream& operator << (std::ostream &out, const Complex &c) {
	out << c.real << "+" << c.imag << "i" << '\n';
	return out;
}
std::istream& operator >> (std::istream &in, Complex &c) {
	in >> c.real >> c.imag;
	return in;
}
int main(){
	Complex c1(0, 0);
	std::ifstream inFile("input.txt");
	if (inFile) {
	  inFile >> c1;
	}
	++c1;
	std::cout << (-c1) << '\n';
	Complex c2(2, 3);
	Complex c3 = c1 + c2; // c1.add(c2)
	Complex c4 = c1 - c2;
	std::ofstream outFile("output1.txt");
	if (outFile) {
	  outFile << c1 << '\n';
	}
	outFile.close();
	std::cout << (c1 != c2) << '\n';
	c1.print();
	c2.print();
	c3.print();
	c4.print();
	std::cout << sizeof(c4) << '\n';
}
#pragma pack(pop)