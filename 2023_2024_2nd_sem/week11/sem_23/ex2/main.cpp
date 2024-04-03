#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception {
public:
    const char* what() const throw() {
        return "Значение не должно быть отрицательным";
    }
};

void testFunction(int value) {
    if (value < 0) {
        throw MyException();
    } else {
        cout << "Значение положительное: " << value << '\n';
    }
}
int main() {
    try {
        testFunction(-1); 
    } catch (MyException& e) {
        cout << "Исключение перехвачено: " << e.what() << endl;
    }
    try {
        testFunction(10); 
    } catch (MyException& e) {
        cout << "Исключение перехвачено: " << e.what() << endl;
    }

    return 0;
}
