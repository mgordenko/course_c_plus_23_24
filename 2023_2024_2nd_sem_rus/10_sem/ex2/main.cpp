#include <iostream>
#include <string>

#include <iostream>
/*
Описать структуру «Время» с тремя полями: часы, минуты 
и секунды. Определить операцию вычитания, такую что 
результатом является объект типа время, содержащий 
сколько времени между первым и вторым событием. Если 
второе событие позже первого ответ должен быть равен 
нулю, иначе верните структуру время содержащую разность 
между этими событиями (часы, минуты, секунды).
*/
struct person {
  unsigned age;
  std::string name;
  person(std::string name, unsigned age) : name{name}, age{age} {}
  void print() {
    std::cout << "Name: " << name << "\tAge: " << age << std::endl;
  }
};
class Person {
 public:
  Person(std::string name, unsigned age) : name{name}, age{age} {}
  void print() {
    std::cout << "Name: " << name << "\tAge: " << age << std::endl;
  }

 private:
  std::string name;
  unsigned age;
};

int main() {
  person bob{"Bob", 42};
  bob.print();
  return 0;
}