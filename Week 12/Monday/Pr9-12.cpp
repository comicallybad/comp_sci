// This program demonstrates that a pointer may be used as a
// parameter to accept the address of an array.
#include <iostream>
#include <iomanip>
#include "sales.h"
using namespace std;

int main()
{
   const int QTRS = 4;
   double sales[QTRS];

   Sales s;

   // Get the sales data for all quarters.
   s.getSales(sales, QTRS);

   // Set the numeric output formatting.
   cout << fixed << showpoint << setprecision(2);

   // Display the total sales for the year.
   cout << "The total sales for the year are $";
   cout << s.totalSales(sales, QTRS) << endl;
   return 0;
}
