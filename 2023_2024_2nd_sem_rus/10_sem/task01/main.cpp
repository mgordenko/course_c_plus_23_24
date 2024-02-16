#include <fstream>
#include <iostream>
#include <string>

/*
Описать структуру «Время» с тремя полями: часы, минуты 
и секунды. Определить операцию вычитания, такую что 
результатом является объект типа время, содержащий 
сколько времени между первым и вторым событием. Если 
второе событие позже первого ответ должен быть равен 
нулю, иначе верните структуру время содержащую разность 
между этими событиями (часы, минуты, секунды).
*/
#include <iostream>

struct Time {
 private:
  int hours;
  int minutes;
  int seconds;

 public:
  Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

  Time operator-(const Time &other) const {
    int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
    int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
    int diff = totalSeconds1 - totalSeconds2;

    if (diff < 0) {
      return Time(0, 0, 0);
    }

    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    return Time(h, m, s);
  }
  friend void display(const Time &time);
  friend std::ostream &operator<<(std::ostream &os, const Time &time);
  friend std::istream &operator>>(std::istream &is, Time &time);
};

void display(const Time &time) {
  std::cout << time.hours << " hours, " << time.minutes << " minutes, " << time.seconds << " seconds" << std::endl;
}
std::ostream &operator<<(std::ostream &os, const Time &time) {
  os << time.hours << " hours, " << time.minutes << " minutes, " << time.seconds << " seconds" << std::endl;
  return os;
}
std::istream &operator>>(std::istream &is, Time &time) {
  is >> time.hours >> time.minutes >> time.seconds;
  return is;
}
int main() {
  std::ifstream file_input("input.txt");
  Time time1;
  file_input >> time1;
  Time time2;
  file_input >> time2;
  Time difference = time1 - time2;
  std::ofstream file("output.txt");
  file << difference;

  return 0;
}
