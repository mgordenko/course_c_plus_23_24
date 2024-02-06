#include <iostream>
#include <string>

enum EnumName {
  Value1,
  Value2
};

enum Day {
  Monday = 10,
  Tuesday = 16,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  Sunday
};

void printDay(Day day) {
  switch (day) {
    case Monday: std::cout << "Monday"; break;
    case Tuesday: std::cout << "Tuesday"; break;
    case Wednesday: std::cout << "Wednesday"; break;
    case Thursday: std::cout << "Thursday"; break;
    case Friday: std::cout << "Friday"; break;
    case Saturday: std::cout << "Saturday"; break;
    case Sunday: std::cout << "Sunday"; break;
    default: std::cout << "Unknown"; break;
  }
}

int main() {
  Day today = Tuesday;
  std::cout << (Day) today << '\n';
  printDay(today);
  return 0;
}