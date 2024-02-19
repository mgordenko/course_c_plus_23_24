#include "Car.h"
#include <iostream>

Car::Car(int y, std::string c, int count) {
  year = y;
  color = c;
  count_doors = count;
}

int Car::getYear() {
  return year;
}

void Car::setYear(int y) {
  year = y;
}

void Car::drive() {
  std::cout << "car in drive mode" << '\n';
}

void Car::info() {
  std::cout << year << " " << color << " " << count_doors << '\n';
}
