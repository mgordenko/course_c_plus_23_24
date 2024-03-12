#include <iostream>
using namespace std;

int main() {
    try {
        throw "Произошла ошибка";
        //
    } catch (const char* msg) {
        cout << "Исключение: " << msg << endl;
    }
    return 0;
}
