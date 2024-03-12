// #include <cmath>
// #include <cstdlib>
// #include <ctime>
// #include <iostream>
// #include <memory>
// #include <vector>

// using namespace std;

// class Shape {
//  protected:
//   double x, y;

//  public:
//   Shape(double x, double y) : x(x), y(y) {}
//   virtual double area() const = 0;
//   virtual ~Shape() {}
// };

// class Circle : public Shape {
//  private:
//   double radius;

//  public:
//   Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}
//   double area() const override {
//     return M_PI * radius * radius;
//   }
// };

// class Rectangle : public Shape {
//  private:
//   double width, height;

//  public:
//   Rectangle(double x, double y, double width, double height) : Shape(x, y), width(width), height(height) {}
//   double area() const override {
//     return width * height;
//   }
// };

// int main() {
//   srand(static_cast<unsigned int>(time(nullptr)));
//   vector<unique_ptr<Shape>> shapes;

//   for (int i = 0; i < 10; ++i) {
//     if (rand() % 2) {
//       shapes.push_back(make_unique<Circle>(0, 0, rand() % 10 + 1));
//     } else {
//       shapes.push_back(make_unique<Rectangle>(0, 0, rand() % 10 + 1, rand() % 10 + 1));
//     }
//   }

//   for (const auto &shape : shapes) {
//     cout << "Shape Area: " << shape->area() << endl;
//   }

//   return 0;
// }

// Реализовать систему классов для представления различных
// геометрических фигур и расчета их площади.

// Базовый класс Shape:
// Содержит координаты x и y центра фигуры.
// Объявляет функцию area() для расчета площади.
// Производный класс Circle:
// Наследует Shape.
// Добавляет свойство radius.
// Реализует функцию area() для расчета площади круга.
// Производный класс Rectangle:
// Наследует Shape.
// Добавляет свойства width и height.
// Реализует функцию area() для расчета площади прямоугольника.

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

class Shape {
 private:
  double x, y;

 public:
  Shape(double x, double y) : x(x), y(y) {}
  virtual double area() const = 0;
};
class Circle : public Shape {
 private:
  double radius;

 public:
  Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}
  double area() const override {
    return 3.14 * radius * radius;
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

  vector<Shape *> circles;

  for (int i = 0; i < 10; ++i) {
    if (rand() % 2 == 0)
      circles.push_back(new Circle(0, 0, rand() % 10 + 1));
    else
      circles.push_back(new Rectangle(0, 0, rand() % 10 + 1, rand() % 10 + 1));
  }

  for (const auto &circle : circles) {
    cout << "Area: " << circle->area() << endl;
  }

  return 0;
}
