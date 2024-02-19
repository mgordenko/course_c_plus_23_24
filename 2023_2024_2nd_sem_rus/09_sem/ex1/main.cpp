#include <iostream>
#include <string>

class Car {
 private:
  int year;
  std::string color;
  int count_doors;

 public:
  Car(int y, std::string c, int count) {
    year = y;
    color = c;
    count_doors = count;
  }
  int getYear() {
    return year;// int* arr
  }
  int setYear(int y) {
    year = y;
  }
  void drive() {
    std::cout << "car in drive mode" << '\n';
  }
  void info() {
    std::cout << year << color << count_doors << '\n';
  }
};
int main() {
  Car car1(2000, "white", 5);
  car1.info();
  car1.drive();
  Car car2(2010, "black", 3);
  car2.info();
  car2.drive();
  return 0;
}