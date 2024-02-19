#include <iostream>
#include <string>
/*
Класс Car
Определите класс Car с приватными атрибутами 
для года выпуска (year), цвета (color), 
количества дверей (count_doors), уровня топлива 
(fuel_level) и пробега (mileage).
Реализуйте конструктор для инициализации этих
атрибутов. Уровень топлива и пробег должны иметь 
значения по умолчанию 50.0 и 0.0 соответственно.
Реализуйте метод drive(double distance), 
который уменьшает уровень топлива в зависимости от 
пройденного расстояния и увеличивает пробег.
 Предположите, что автомобиль расходует 1 литр 
 топлива на 10 км.
Реализуйте метод refuel(double amount), чтобы
 добавлять топливо в бак.
Добавьте метод stop(), который выводит сообщение 
о том, что автомобиль остановлен.
Реализуйте метод info(), который выводит информацию 
об автомобиле: год выпуска, цвет, количество дверей, 
уровень топлива и пробег.
Реализуйте методы для изменения цвета 
автомобиля и получения текущих значений цвета, 
уровня топлива и пробега.
В функции main, создайте несколько объектов класса Car с разными характеристиками.
Протестируйте все методы класса, чтобы убедиться, что они работают корректно. Попробуйте пройти некоторое расстояние, заправить автомобиль, изменить его цвет и затем вывести информацию о нем.
*/

#include <iostream>
#include <string>
/*
Класс Car
Определите класс Car с приватными атрибутами 
для года выпуска (year), цвета (color), 
количества дверей (count_doors), уровня топлива 
(fuel_level) и пробега (mileage).
Реализуйте конструктор для инициализации этих
атрибутов. Уровень топлива и пробег должны иметь 
значения по умолчанию 50.0 и 0.0 соответственно. */

class Car {
 private:
  int year;
  std::string color;
  int doors;
  double fuel = 50.0;
  double distance = 0.0;

 public:
  Car(int y, std::string c, int d, double f = 50.0, double dis = 0.0) {
    year = y;
    color = c;
    doors = d;
    fuel = f;
    distance = dis;
  };

  int getYear() {
    return year;
  }
  int setYear(int y) {
    year = y;
  }
  std::string getColor() {
    return color;
  }
  std::string setColor(std::string c) {
    color = c;
  }
  int getDoors() {
    return doors;
  }
  int setDoors(double d) {
    doors = d;
  }

  void drive(double distance) {
    fuel -= distance / 10;
  }

  void refuel(double amount) {
    fuel += amount;
  }

  void info() {
    std::cout << year << " " << color << " " << doors << " " << fuel << " " << distance << "\n";
  }
};

int main() {
  Car car1(2000, "red", 4);
  car1.setYear(2006);
  car1.getColor();
  car1.info();
  car1.drive(10);
  car1.refuel(2.0);
  car1.info();
  return 0;
}