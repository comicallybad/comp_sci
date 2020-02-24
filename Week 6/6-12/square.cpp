#include "square.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Square::init()
{
    // Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    // Get the radius of the circle
    cout << "This program calculates the area of a circle.\n";
    radius = getRadius();

    // Caclulate the area of the circle
    area = PI * square(radius);

    // Display the area
    cout << "The area is " << area << endl;

    multiplyArea();
}

double Square::getRadius()
{
    double rad;

    cout << "Enter the radius of the circle: ";
    cin >> rad;
    return rad;
}

double Square::square(double number)
{
    return number * number;
}

double Square::multiplyArea()
{
    area *= 10;
    cout << "The area times 10 is: " << area << endl;
};