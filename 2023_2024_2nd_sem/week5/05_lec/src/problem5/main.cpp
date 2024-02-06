#include <iostream>
#include <fstream>

int sumRef(int& A, int& B){
	A++; B+=3;
	return A + B;
}

int main(){
	std::fstream file("test.txt", std::fstream::out);
	std::string str = "qwerty";
	char str_c[10] = "ABC DEF";
	int val = 25;

	file << val << " " << std::hex 
	<< 14 << std::endl;
	file << str << std::endl;
	file << str_c << std::endl;
	file << "KLMN\0OP" << std::endl;
	file.close();

}	