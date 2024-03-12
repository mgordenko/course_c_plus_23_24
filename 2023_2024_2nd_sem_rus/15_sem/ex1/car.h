#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
 private:
  int year;
  std::string color;
  int count_doors;

 public:
  Car(int y, std::string c, int count);
  int getYear();
  void setYear(int y);
  void drive();
  void info();
};

#endif// CAR_H
