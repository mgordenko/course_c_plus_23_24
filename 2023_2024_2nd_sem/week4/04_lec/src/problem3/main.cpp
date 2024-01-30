#include <iostream>

int sum(int A, int B) {
	A++; B+=3;
	return A + B;
}

int main() {
	int a = 1, b = 2;
	int c = sum(a, b);
}