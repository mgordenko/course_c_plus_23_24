#include "Car.h"
#include <iostream>

int main() {
  Car car1(2000, "white", 5);
  car1.info();
  car1.drive();
  Car car2(2010, "black", 3);
  car2.info();
  car2.drive();
  return 0;
}
