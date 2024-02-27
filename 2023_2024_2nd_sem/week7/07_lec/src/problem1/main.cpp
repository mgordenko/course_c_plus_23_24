#include <iostream>

union MyUnion {
	int intMember;
	float floatMember;
	char charMember;
	double doubleMember;
	unsigned char membs[4];
};
// radix sort

union {
	int a;
	float b;
} qwerty;

int main(){
	qwerty.a = 10;
	MyUnion testUnion;
	testUnion.membs[0] = 'a';
	testUnion.membs[1] = 'b';
	//testUnion.membs[2] = 0;
	//testUnion.membs[2] = 0;
	std::cout << "double member " << testUnion.doubleMember << '\n';
	std::cout << "int member " << testUnion.intMember << '\n';
	std::cout << "float member " << testUnion.floatMember << '\n';
	std::cout << "char member " << testUnion.charMember << '\n';
	std::cout << "char[0] member " << testUnion.membs[0] << '\n';
	std::cout << "char[1] member " << testUnion.membs[1] << '\n';
	std::cout << "char[2] member " << testUnion.membs[2] << '\n';
	std::cout << "char[3] member " << testUnion.membs[3] << '\n';
	std::cout << sizeof(testUnion);
	return 0;
}