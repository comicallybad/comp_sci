#include "winningDivision.h"
#include <iostream>
#include <string>

using namespace std;

double WinningDivision::getSales(string divName)
{
    double temp;
    cout << "Please enter " << divName << "'s current quarterly sales figure: ";
    cin >> temp;

    while (temp < 0)
    {
        cin.clear();
        cin.ignore();
        cout << "Please enter a valid number: ";
        cin >> temp;
    }
    return temp;
}

void WinningDivision::findHighest(double sales1, double sales2, double sales3, double sales4)
{
    double highest = sales1;
    string division = "Northern Division";

    if (sales2 > highest)
    {
        highest = sales2;
        division = "Eastern Division";
    }
    if (sales3 > highest)
    {
        highest = sales3;
        division = "Southern Division";
    }
    if (sales4 > highest)
    {
        highest = sales4;
        division = "Western Division";
    }

    cout << "The highest division quarterly sales is: " << highest << " of division: " << division << endl;
}