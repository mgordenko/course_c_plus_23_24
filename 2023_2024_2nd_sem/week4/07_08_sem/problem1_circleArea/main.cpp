///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Calculate the Area of a Circle
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `double circleArea(double radius)` that calculates and 
/// returns the area of a circle given its radius.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

double circleArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    std::cout << circleArea(5);
}
