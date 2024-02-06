#include <iostream>
#include <fstream>


int main() {
	std::fstream file("test.txt", std::fstream::in);

	if(file.is_open())
		std::cout << "OK" << std::endl;
	else
		std::cout << "Error" << std::endl;
	file.close();


}