#include <iostream>

int sumRef(int& A, int& B){
	A++; B+=3;
	return A + B;
}

int main(){
	int a = 1, b = 2;
	int c = sumRef(a, b);
	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << c << '\n';
}	