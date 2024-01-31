#include <iostream>

int sum(int v1, int v2);

int main(){
	int a = 10, b = 20;
	int sum_res = sum(a, b);
	std::cout << " "<< &a << '\n';
	std::cout << " "<<  &b << '\n';
	std::cout << a << b << '\n';
    std::cout << sum_res;
	return 0;
}

int sum(int a, int b) {
	a = b = 100;
	std::cout << "sum "<< &a << '\n';
	std::cout << "sum "<<  &b << '\n';
	return a + b;
}