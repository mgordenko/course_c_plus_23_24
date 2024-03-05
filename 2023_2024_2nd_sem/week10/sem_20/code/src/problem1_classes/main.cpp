#include <cmath>
#include <iostream>

#include "polarcoordinate.h"

const double EPS = 1e-6;

bool checkFields(const PolarCoordinate& p, double corrRad, double corrAng)
{
    return std::abs(p.getRadius() - corrRad) < EPS && std::abs(p.getAngle() - corrAng) < EPS;
}


bool testConstructor()
{
    double testRad = 1.52;
    double testAng = M_PI;
    PolarCoordinate c(testRad, testAng);
    bool doubleConstr = checkFields(c, testRad, testAng);

    return doubleConstr;
}


bool testAdditionConst(const PolarCoordinate& a, const PolarCoordinate& b, double rad, double ang)
{
    PolarCoordinate c = a + b;
    return checkFields(c, rad, ang);
}

bool testSubtractionConst(const PolarCoordinate& a, const PolarCoordinate& b, double rad, double ang)
{
    PolarCoordinate c = a - b;
    return checkFields(c, rad, ang);
}

bool testAddAs(PolarCoordinate& a, const PolarCoordinate& b)
{
    PolarCoordinate c = a + b;
    a += b;
    bool test1 = checkFields(a, c.getRadius(), c.getAngle());
    c = a + a;
    bool test2 = checkFields(a += a, c.getRadius(), c.getAngle());
    return test1 && test2;
}


bool testSubAs(PolarCoordinate& a, const PolarCoordinate& b)
{
    PolarCoordinate c = a - b;
    a -= b;
    bool test1 = checkFields(a, c.getRadius(), c.getAngle());
    c = a - a;
    bool test2 = checkFields(a -= a, c.getRadius(), c.getAngle());
    return test1 && test2;
}


bool testPartC()
{
    PolarCoordinate a(10, 0);
    PolarCoordinate b(10, M_PI_2);
    if (!testAdditionConst(a, b, 10 * std::sqrt(2), M_PI_4))
    {
        std::cerr << "Error in addition\n";
        return false;
    }
    if (!testSubtractionConst(a, b, 10 * std::sqrt(2), -M_PI_4))
    {
        std::cerr << "Error in subtraction\n";
        return false;
    }
    if (!testAddAs(a, b))
    {
        std::cerr << "Error in addition with assignment\n";
        return false;
    }
    if (!testSubAs(a, b))
    {
        std::cerr << "Error in subtraction with assignment\n";
        return false;
    }
    return true;
}


bool testMult(const PolarCoordinate& a, const double& value)
{
    PolarCoordinate c = a * value;
    return checkFields(c, a.getRadius() * value, a.getAngle());
}

bool testDiv(const PolarCoordinate& a, const double& value)
{
    PolarCoordinate c = a / value;
    return checkFields(c, a.getRadius() / value, a.getAngle());
}

bool testMultAs(PolarCoordinate& a, const double& value)
{
    PolarCoordinate c = a * value;
    a *= value;
    return checkFields(a, c.getRadius() * value, c.getAngle());
}

bool testDivAs(PolarCoordinate& a, const double& value)
{
    PolarCoordinate c = a / value;
    a /= value;
    return checkFields(a, c.getRadius() / value, c.getAngle());
}


bool testPartD()
{
    PolarCoordinate a(10, M_PI / 3);
    double value = 3.0;
    if (!testMult(a, value))
    {
        std::cerr << "Error in multiplication\n";
        return false;
    }
    if (!testDiv(a, value))
    {
        std::cerr << "Error in division\n";
        return false;
    }
    if (!testMultAs(a, value))
    {
        std::cerr << "Error in multiplication with assignment\n";
        return false;
    }
    if (!testDivAs(a, value))
    {
        std::cerr << "Error in division with assignment\n";
        return false;
    }
    return true;
}


bool testEverything()
{
    bool constructors = testConstructor();

    bool partC = testPartC();
    bool partD = testPartD();
    return constructors && partC && partD;
}

int main()
{
    bool success = testEverything();
    if (success)
    {
        std::cout << "All tests have been passed successfully.\n";
    }
    else
    {
        std::cout << "Some tests have failed. Execution of the following tests stopped.\n";
    }
    return 0;
}
