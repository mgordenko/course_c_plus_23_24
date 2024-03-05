#ifndef POLARCOORDINATE_H
#define POLARCOORDINATE_H


class PolarCoordinate
{

public:
    PolarCoordinate(double radius, double angle);

    double getRadius() const { return _radius; }
    double getAngle() const { return _angle; }

    PolarCoordinate operator+(const PolarCoordinate& b) const;
    PolarCoordinate operator-(const PolarCoordinate& b) const;
    PolarCoordinate& operator+=(const PolarCoordinate& b);
    PolarCoordinate& operator-=(const PolarCoordinate& b);

    PolarCoordinate operator*(double b) const;
    PolarCoordinate operator/(double b) const;
    PolarCoordinate& operator*=(double b);
    PolarCoordinate& operator/=(double b);

private:
    double _radius;
    double _angle;
};

#endif// POLARCOORDINATE_H
