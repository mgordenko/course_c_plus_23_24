#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>

// Implement a class system to represent various
// geometric shapes and calculation of their area.

// Base class Shape:
// Contains the x and y coordinates of the shape's center.
// Declares the area() function to calculate area.
// Derived class Circle:
// Inherits Shape.
// Adds the radius property.
// Implements the area() function to calculate the area of a circle.
// Rectangle derived class:
// Inherits Shape.
// Adds width and height properties.
// Implements the area() function to calculate the area of a rectangle.

class Shape {
 protected:
  double x, y;
 public:
  Shape(double x, double y) : x(x), y(y) {}
  virtual double area() const = 0;
  virtual void print() const = 0;
};
class Circle : public Shape {
 public:
  Circle(double r, double x, double y) :Shape(x, y) {
    radius = r;
  }
  double area() const  { return 3.14 * radius * radius; }
  void print() const {
    std::cout << "Circle: r = " << radius << " area = " << area() << '\n';
  }
 private:
  double radius;
};
class Rectangle : public Shape {
 public:
  Rectangle(double s1, double s2, double x, double y) : Shape(x, y) {
    a = s1; b = s2;
  }
  double area() const  { return  a * b; }
  void print() const {
    std::cout << "Rectangle: a = " << a << " b = " << b << " area = " << area() << '\n';
  }
 private:
  double a, b;
};
int main() {
  std::vector<Shape*> v;
  for (int i = 0; i < 10; ++i) {
    if (rand() % 2 == 0) {
      v.push_back(new Circle(rand() % 10, rand() % 10, rand() % 10));
    } else {
      v.push_back(new Rectangle(rand() % 10, rand() % 10, rand() % 10, rand() % 10));
    }
    v[i]->print();
  }
  return 0;
}