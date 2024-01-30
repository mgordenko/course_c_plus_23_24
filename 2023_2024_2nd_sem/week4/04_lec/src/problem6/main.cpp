#include <iostream>
#include <iomanip>

void show(int a){
	std::cout<<"0x"<<std::hex<<a<<std::dec<<std::endl;
}

void show(long long int a){
	std::cout<<"0"<<std::oct<<a<<std::dec<<std::endl;
}

void show(double a){
	std::cout<<std::setprecision(17)<<a<<std::endl;
}

void show(char a){
	std::cout<<"Symbol: "<<a<<" Code: "<<(int)a << std::endl;
}

int main(){
	show(123);
	show(0xCAFE);
	show(0.1 + 0.2);
	show('a');

	short a = 5;
	show(a);
	show((char)57);
	
	return 0;
}	
