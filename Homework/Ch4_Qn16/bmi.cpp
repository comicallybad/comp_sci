#include "bmi.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void bodyMassIndex::calculateBMI()
{
    double calculatedBMI;

    cout << "Please input a weight in pounds: ";
    cin >> weight;
    cout << "Please input a height in inches: ";
    cin >> height;

    calculatedBMI = weight * (703 / pow(height, 2));

    cout << setprecision(4) << "The calculated BMI is: " << calculatedBMI << endl;

    if (calculatedBMI > 25)
        cout << "This BMI consideres a person to be overweight." << endl;

    if (calculatedBMI >= 18.5 && calculatedBMI <= 25)
        cout << "This BMI consideres a person to be optimal weight." << endl;

    if (calculatedBMI < 18.5)
        cout << "This BMI consideres a person to be underweight." << endl;
};