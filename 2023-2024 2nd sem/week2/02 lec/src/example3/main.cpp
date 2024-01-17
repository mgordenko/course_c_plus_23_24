#include <iostream>
using namespace std;

int main() {
    float a = 12.345, d = 1.23;
    std::cout << "a = " << a << std::endl;

    int b = 123, c = 345;
    std::cout << "b = " << b << "\n" << "c = 0x " << std::hex << c << std::endl << "d = " << std::dec << d;

}
