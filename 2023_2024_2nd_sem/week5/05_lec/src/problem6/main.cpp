#include <iostream>
#include <iomanip>
#include <fstream>


int main(){
	std::fstream file("test.txt", std::fstream::out);
	std::string str = "qwerty";
	int val = 0x33445566;

	file << std::hex << val << " " << 
	std::dec << 14 << std::endl;
	file << str << std::endl;
	file.put('A');
	file.put('\n');
	file.write((char *)&val, sizeof(int));
	file.close();

	return 0;
}	
