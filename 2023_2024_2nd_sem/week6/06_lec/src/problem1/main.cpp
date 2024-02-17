#include <iostream>

enum Weekdays {
	Monday,
	Thursday = 12,
	Wendsday
};

int main(){
	std::cout << Monday << '\n';
	std::cout << Thursday << '\n';
	std::cout << Wendsday << '\n';
	return 0;
}