#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle()
    {
        radius = 0.0;
    }
    Circle(double r)
    {
        radius = r;
    }
    void setRadius(double);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
};
#endif