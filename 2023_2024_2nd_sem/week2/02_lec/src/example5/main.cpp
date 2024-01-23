#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++)
        std::cout<< i << " ";

    int i = 0;
    for ( ; ; ) {
        if (i >= 3) 
            break;
        std::cout<< i << " ";
        i++;
    }
    std::cout << std::endl;
    for(int i = 0, j = 5; (i<=5) & (j>0); i++,j--)
    {
        std::cout<< i << " " << j << " ";
    }

    std::cout << std::endl;
    for (int i = 0; i < 3; i++) {
        i += 1;
        for (int j = 0; j < 3; j++) {
            std::cout<< i << " " << j << std::endl;
            i += 1;
            j += 1;
        }
    }


}
