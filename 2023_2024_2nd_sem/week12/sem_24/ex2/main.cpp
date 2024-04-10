#include <iostream>
using namespace std;

class Engine {
 public:
  void start() {
    cout << "Engine started\\n";
  }
};
class Wheel {
 public:
  void roll() {
    cout << "Wheels rolling\\n";
  }
};
class Car : public Engine, public Wheel {};

int main() {
  Car myCar;
  myCar.start();
  myCar.roll();
  return 0;
}