//Write a program that computes the tax and tip on a restaurant bill for a patron with a $44.50 meal charge.
//The tax should be 6.75 percent of the meal cost. The tip should be 15 percent of the total after adding the tax.
//Display the meal cost, tax amount, tip amount, and total bill on the screen.

#include "bill.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Bill::printBill()
{
    double total = charge + (charge * tax) + (charge * tip);
    cout << fixed << showpoint << setprecision(2)
         << "The meal cost is: $" << charge << endl
         << "The tax amount is: $" << charge * tax << endl
         << "The tip amount is: $" << charge * tip << endl
         << "The total bill cost is: $" << total << endl;
};