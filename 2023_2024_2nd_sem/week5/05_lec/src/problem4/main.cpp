#include <iostream>
#include <fstream>

int main(){
	std::fstream file("test.txt", std::fstream::out);
	std::string str = "qwerty";
	char str_c[10] = "ABC";

	file.write(str.c_str(), str.length());
	file.write(str_c, 3);
	file.write("KLMN", 4);
	file.close();

}