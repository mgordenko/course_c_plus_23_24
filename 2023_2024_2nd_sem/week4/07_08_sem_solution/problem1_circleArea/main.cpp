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
    double result = M_PI * radius * radius;
    return result;
}

void calCircleArea(double radius, double& result) {
    result = M_PI * radius * radius;
}

int main() {
    int r;
    std::cin >> r;
    double res = 0;
    calCircleArea(r, res);
    std::cout << res << " ";
}
