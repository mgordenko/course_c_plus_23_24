#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 3; i++)
        for(int j = i; j < 3; j++)
        {
            std::cout<< i << " " << j << std::endl;
        }
}
