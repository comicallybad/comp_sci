#include "dailySales.h"
#include <iostream>
#include <iomanip>

using namespace std;

void DailySales::calculateSales()
{
    int day = 1;
    while (day <= NUM_DAYS)
    {
        cout << "Enter the sales for day " << day << ": ";
        cin >> dailySales;
        totalSales = totalSales + dailySales;
        day++;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nTotal sales: $" << totalSales << endl;
    cout << "\nAverage sales: $" << totalSales / NUM_DAYS << endl;
}