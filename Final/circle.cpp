#include "circle.h"
#include <iostream>

using namespace std;

void Circle::setRadius(double input)
{
    radius = input;
}
double Circle::getRadius()
{
    return radius;
}
double Circle::getArea()
{
    double area = pi * radius * radius;
    return area;
}
double Circle::getDiameter()
{
    double diameter = radius * 2;
    return diameter;
}
double Circle::getCircumference()
{
    double circumference = 2 * pi * radius;
    return circumference;
}