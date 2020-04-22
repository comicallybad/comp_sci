// This program lets the user enter a number. The
// dollarFormat function formats the number as
// a dollar amount.
#include "dollar.h"
#include <iostream>
#include <string>
using namespace std;

// Function prototype
void dollarFormat(string &);

int main()
{
   string input;

   // Get the dollar amount from the user.
   cout << "Enter a dollar amount in the form nnnnn.nn : ";
   cin >> input;

   Dollar d(input);

   d.convert();

   cout << "Here is the amount formatted:\n";
   cout << d.getInput() << endl;
   return 0;
}
