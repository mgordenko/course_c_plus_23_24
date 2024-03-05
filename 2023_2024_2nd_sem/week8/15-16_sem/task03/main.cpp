#include <iostream>

/*
You are tasked with creating a program to manage a database 
of students' information. Each student record consists of the 
following fields: name, age, and grade. You need to implement 
a structure to represent a student record, including various 
overloaded operators for comparison and input/output operations.

In the main program, you should provide functionality to read 
student records from a file, add new records, delete existing 
records, modify records, and display all records. Additionally, 
you should implement the ability to save the updated database 
to a file.

Furthermore, you are required to store the collection of student 
records in a container such as a vector or any other appropriate 
container provided by the Standard Template Library (STL).

Your program should support the following operations:

Reading student records from a file and storing them in the database.
Adding a new student record to the database.
Deleting an existing student record from the database.
Modifying the information of an existing student record.
Displaying all student records.
Saving the updated database to a file.
*/

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct Student {
  std::string name;
  int age;
  double grade;
  Student(std::string n = "", int a = 0, double g = 0) {
    name = n;
    age = a;
    grade = g;
  }
  friend std::istream &operator>>(std::istream &in, Student &student) {
    in >> student.name >> student.age >> student.grade;
    return in;
  }

  friend std::ostream &operator<<(std::ostream &out, const Student &student) {
    out << "Name: " << student.name << ", Age: " << student.age << ", Grade: " << student.grade;
    return out;
  }
};

void readRecordsFromFile(const std::string &filename, std::vector<Student> &students) {
  std::fstream file(filename);
  if (file.is_open()) {
    Student student;
    while (file >> student) {
      students.push_back(student);
    }
  }
}

void displayRecords(const std::vector<Student> &students) {
  for (const auto &st : students) {
    std::cout << st << '\n';
  }
}

void addRecord(std::vector<Student> &students) {
  Student st("Bob", 20, 99);
  students.push_back(st);
}

void deleteRecord(std::vector<Student> &students, int pos) {
  students.erase(students.begin() + pos);
}

void writeRecordsToFile(std::string name, const std::vector<Student> &students) {
  std::ofstream file(name);
  for (const auto &st : students) {
    file << st << '\n';
  }
}

int main() {
  std::vector<Student> students;

  readRecordsFromFile("students.txt", students);

  addRecord(students);
  deleteRecord(students, 2);
  displayRecords(students);

  writeRecordsToFile("updated_students.txt", students);

  return 0;
}
