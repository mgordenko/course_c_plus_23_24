#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <memory>
#include <vector>

using namespace std;

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
  Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}
  double area() const override {
    return M_PI * radius * radius;
  }
};

class Rectangle : public Shape {
 private:
  double width, height;

 public:
  Rectangle(double x, double y, double width, double height) : Shape(x, y), width(width), height(height) {}
  double area() const override {
    return width * height;
  }
};

int main() {
  srand(static_cast<unsigned int>(time(nullptr)));
  vector<unique_ptr<Shape>> shapes;

  for (int i = 0; i < 10; ++i) {
    if (rand() % 2) {
      shapes.push_back(make_unique<Circle>(0, 0, rand() % 10 + 1));
    } else {
      shapes.push_back(make_unique<Rectangle>(0, 0, rand() % 10 + 1, rand() % 10 + 1));
    }
  }

  for (const auto &shape : shapes) {
    cout << "Shape Area: " << shape->area() << endl;
  }

  return 0;
}