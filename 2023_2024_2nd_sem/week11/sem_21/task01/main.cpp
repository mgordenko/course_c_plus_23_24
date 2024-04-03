#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

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
  virtual ~Shape() {}
};

int main() {


  return 0;
}