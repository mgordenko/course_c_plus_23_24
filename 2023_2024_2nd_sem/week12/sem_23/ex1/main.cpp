#include <iostream>
using namespace std;

int main() {
    try {
        //v.at(5);
        throw "Error";
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }
    return 0;
}
