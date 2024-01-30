#include <iostream>
#include <iomanip>

unsigned long long factorial(unsigned int n){
	if(n > 1)
		return n*factorial(n-1);
	else
		return 1;
}

int main(){
	std::cout << factorial(5);
	
	return 0;
}	
