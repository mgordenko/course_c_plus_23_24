#include <cmath>
#include <iostream>
#include <vector>

const double PI = 3.1415;
/*
Create a programming task that involves designing a class hierarchy for geometric shapes, specifically
 circles and rectangles, with the capability to calculate their area. At the base of this hierarchy is
 an abstract class named `Shape`, which includes protected variables `x` and `y` representing the coordinates
 of the shape's center, and a pure virtual method `area()` for calculating the area. Derived from `Shape`
 are the classes `Circle` and `Rectangle`, each implementing the `area()` method according to their unique
 properties: radius for the circle and width and height for the rectangle. In the main function of the program,
 instances of a circle and a rectangle are to be created, their areas calculated, and the results displayed on
 the screen. Afterward, the allocated memory should be properly freed. The task is to write the necessary
 classes and the main function, adhering to the principles of inheritance and polymorphism in C++.
 * */
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
