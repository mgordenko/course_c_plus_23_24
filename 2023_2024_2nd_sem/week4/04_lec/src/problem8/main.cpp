#include <iostream>
#include <iomanip>

// unsigned int sum2(unsigned int stopVal, ...) {
// 	unsigned int* ptr = &stopVal;
// 	unsigned int inc = 1;

// 	if((sizeof(void*)/sizeof(unsigned int)) > inc)
// 		inc = sizeof(void*)/sizeof(unsigned int);

// 	ptr += inc;
// 	unsigned int res = 0;

// 	while((*ptr) != stopVal) {
// 		res += (*ptr);
// 		ptr += inc;
// 	}
// 	return res;
// }


// unsigned int sum1(int n, unsigned int arg1, ...) {
// 	unsigned int* ptr = &arg1;
// 	unsigned int res = 0;
// 	unsigned int inc = 1;

// 	if((sizeof(void*)/sizeof(unsigned int)) > inc)
// 		inc = sizeof(void*)/sizeof(unsigned int);
		
// 	for(int i = 0; i < n; i++) {
// 		res += (*ptr);
// 		ptr += inc;
// 	}
// 	return res;
// }
unsigned int sum3(int n, unsigned int arg1, ...){
	unsigned int res = 0;
	va_list vl;
	va_start(vl, n);

	for(int i = 0; i < n; i++)
		res += va_arg(vl, int);

	va_end(vl);

	return res;
}

int main(){
	//unsigned res1 = sum1(5, 1, 2, 3);		
	// unsigned res2 = sum2(5, 1, 2, 3, 4, 5);
	unsigned res3 = sum3(5, 1, 2, 3, 4, 5);
	//std::cout << res1 << '\n';
	// std::cout << res2 << '\n';
	std::cout << res3 << '\n';
	return 0;
}	
