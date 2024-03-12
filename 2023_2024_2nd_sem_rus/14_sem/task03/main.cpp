
#include <iostream>
#include <string>
using namespace std;

class User {
 protected:
  string name;

 public:
  User(string name) : name(name) {}
  virtual void accessResources() const {
    cout << name << " has basic user access." << endl;
  }
  virtual ~User() {}
};
class Employee : public virtual User {
 public:
  Employee(string name) : User(name) {}
  void accessResources() const override {
    cout << name << " has employee-level access to resources." << endl;
  }
};
class Manager : public virtual User {
 public:
  Manager(string name) : User(name) {}
  void accessResources() const override {
    cout << name << " has manager-level access to resources." << endl;
  }
};
class Administrator : public Employee, public Manager {
 public:
  Administrator(string name) : User(name), Employee(name), Manager(name) {}
  void accessResources() const override {
    cout << name << " has administrator-level access to all resources." << endl;
  }
};

int main() {
  Administrator admin("John Doe");
  admin.accessResources();

  User *userPtr = &admin;
  userPtr->accessResources();

  return 0;
}

// Класс User: Базовый класс, от которого будут
// наследоваться все остальные классы. Включает в себя
// базовую информацию о пользователе (например, имя).

// Класс Employee: Производный класс от User, представляющий
// сотрудника. Добавляет уровень доступа к ресурсам, специфичным
// для сотрудников.

// Класс Manager: Производный класс от User, представляющий менеджера.
//  Менеджеры обладают более высоким уровнем доступа, чем обычные
//  сотрудники, и могут управлять ресурсами отдела.

// Класс Administrator: Производный класс, который должен наследовать
// свойства и методы как от Employee, так и от Manager. Администраторы
// обладают наивысшим уровнем доступа, позволяющим им управлять ресурсами
// на всех уровнях.

// Реализовать систему классов с использованием виртуального наследования,
//  чтобы решить проблему ромбовидного наследования и корректно
//  организовать иерархию классов User, Employee, Manager и
//   Administrator. Каждый класс должен предоставлять метод
//   accessResources(), демонстрирующий уровень доступа пользователя.