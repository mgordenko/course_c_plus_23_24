
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
