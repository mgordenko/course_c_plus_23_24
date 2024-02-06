#include <iostream>
#include <iomanip>
#include <fstream>

unsigned long long factorial(unsigned int n){
	if(n > 1)
		return n*factorial(n-1);
	else
		return 1;
}

int main(){
	std::fstream file("test.txt", std::fstream::in);
	char buff[7] = { 0 };

	char* dyn_buff = new char[7];
	memset(dyn_buff, 0, 10);

	file.read(buff, 6);				
	file.read(dyn_buff, 10);		
	file.close();
	delete[] dyn_buff;

	return 0;
}	
