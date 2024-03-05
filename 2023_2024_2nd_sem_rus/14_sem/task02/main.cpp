#include <cmath>
#include <iostream>
#include <vector>

const double PI = 3.1415;

class Shape {
 protected:
  double x, y;

 public:
  Shape(double x, double y) : x(x), y(y) {}
  virtual double area() const = 0;
  virtual ~Shape() {}
};

class Circle : public Shape {
 private:
  double radius;

 public:
  Circle(double x, double y, double r) : Shape(x, y), radius(r) {}
  double area() const override { return PI * radius * radius; }
};

class Rectangle : public Shape {
 private:
  double width, height;

 public:
  Rectangle(double x, double y, double w, double h)
      : Shape(x, y), width(w), height(h) {}
  double area() const override { return width * height; }
};

int main() {
  Shape *circle = new Circle(0.0, -1.0, 10.0);
  Shape *rectangle = new Rectangle(0.0, 0.0, 4.0, 6.0);

  std::cout << "Circle area: " << circle->area() << std::endl;
  std::cout << "Rectangle area: " << rectangle->area() << std::endl;

  delete circle;
  delete rectangle;

  return 0;
}
