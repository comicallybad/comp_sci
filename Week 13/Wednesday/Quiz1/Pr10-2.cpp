// This program tests a customer number to determine whether
// it is in the proper format.
#include "customer.h"
#include <iostream>
#include <cctype>
using namespace std;

// Function prototype

int main()
{
   const int SIZE = 13; // Array size
   char customer[SIZE]; // To hold a customer number
   Customer c;

   // Get the customer number.
   cout << "Enter a customer number in the form ";
   cout << "LNLNLN<space>NLNLNL\n";
   cout << "(L=Letters N=Numbers): ";
   cin.getline(customer, SIZE);

   // Determine whether it is valid.
   if (c.testNum(customer, SIZE))
      cout << "That's a valid customer number.\n";
   else
   {
      cout << "That is not the proper format of the ";
      cout << "customer number.\nHere is an example:\n";
      cout << "   a1b2c3 1a2b3c\n";
   }
   return 0;
}
