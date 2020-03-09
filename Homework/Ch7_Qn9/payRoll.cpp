#include "payRoll.h"
#include <iostream>
#include <iomanip>

using namespace std;

void PayRoll::display()
{
    double numHours;
    double numPayRate;
    for (int i = 0; i < 7; i++)
    {
        cout << "Please enter the hours for employee: " << empID[i] << ": ";
        cin >> numHours;
        while (numHours < 1)
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter a valid number: ";
            cin >> numHours;
        }
        hours[i] = numHours;

        cout << "Please enter the pay rate for employee: " << empID[i] << ": ";
        cin >> numPayRate;
        while (numPayRate < 1)
        {
            cin.clear();
            cin.ignore();
            cout << "Please enter a valid number: ";
            cin >> numPayRate;
        }
        payRate[i] = numPayRate;
    }
}

void PayRoll::calculateWages()
{
    for (int i = 0; i < 7; i++)
    {
        wages[i] = hours[i] * payRate[i];
    }
}

void PayRoll::displayWages()
{
    for (int i = 0; i < 7; i++)
    {
        cout << "---Employee: " << empID[i] << "---" << endl;
        cout << "Hours worked: " << hours[i] << endl;
        cout << "Rate of pay: " << payRate[i] << endl;
        cout << "Total wages: " << wages[i] << endl;
    }
}
