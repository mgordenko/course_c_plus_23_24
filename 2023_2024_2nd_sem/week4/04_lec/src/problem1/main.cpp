#include <iostream>


int main(){
	int sum_res = sum(1, 2);
    std::cout << sum_res;
	return 0;
}

int sum(int a, int b){
	return a + b;
}