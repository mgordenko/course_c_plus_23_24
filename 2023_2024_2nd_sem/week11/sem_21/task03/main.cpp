
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// User class: The base class from which the
// all other classes are inherited. Includes
// basic information about the user (for example, name).

// Employee class: Derived from User, representing
// employee. Adds a level of access to resources specific
// for staff.

// Manager class: Derived from User, representing a manager.
// Managers have a higher level of access than regular ones
// employees, and can manage department resources.

// Administrator class: Derived class that should inherit
// properties and methods from both Employee and Manager. Administrators
// have the highest level of access allowing them to manage resources
// at all levels.

// Implement a class system using virtual inheritance,
// to solve the problem of diamond-shaped inheritance and correctly
// organize a hierarchy of classes User, Employee, Manager and
//Administrator. Every class must provide a method
// accessResources() demonstrating the user's access level.

class User {
 protected:
  string name;

 public:
  static int count;
  User(string name) : name(name) { count++; }
  virtual void accessResources() const {
    cout << name << " has basic user access." << endl;
  }
  virtual ~User() {}
};
int User::count = 0;
class Employee : public User {
 public:
  Employee(string name) : User(name) { }
  void accessResources() const {
    cout << name << " has basic employee access." << endl;
  }
  virtual ~Employee() {}
};

class Manager : public User{
 public:
  Manager(string name) : User(name) { }
  void accessResources() const {
    cout << name << " has basic manager access." << endl;
  }
  virtual ~Manager() {}
};

class Administrator : public User{
 public:
  Administrator(string name) : User(name) { }
  void accessResources() const {
    cout << name << " has basic administrator access." << endl;
  }
  virtual ~Administrator() {}
};

std::string generateName() {
  size_t size = rand() % 7 + 3; // 3 до 9 букв
  std::string name = "";
  for (int i = 0; i < size; ++i) {
    name += char(rand() % 26 + 'a');
  }
  return name;
}

int main() {
  std::cout << User::count << '\n';
  std::vector<User*> v;
  for (int i = 0; i < 10; ++i) {
    int num = rand() % 3;
    if (num == 0) {
      v.push_back(new Employee(generateName()));
    } else if (num == 1) {
      v.push_back(new Administrator(generateName()));
    } else if (num == 2) {
      v.push_back(new Manager(generateName()));
    }
    v[i]->accessResources();
  }
  std::cout << User::count << '\n';
  return 0;
}
