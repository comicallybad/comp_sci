// This program demonstrates the linear search algorithm.
#include <iostream>
#include "linearSearch.h"
using namespace std;

// Function prototype
int linearSearch(const int[], int, int);

int main()
{
   const int SIZE = 5;
   int tests[SIZE] = {87, 75, 98, 100, 82};
   int results;

   LinearSearch ls;
   // Search the array for 100.
   results = ls.linearSearch(tests, SIZE, 100);

   // If linearSearch returned -1, then 100 was not found.
   if (results == -1)
      cout << "You did not earn 100 points on any test\n";
   else
   {
      // Otherwise results contains the subscript of
      // the first 100 in the array.
      cout << "You earned 100 points on test ";
      cout << (results + 1) << endl;
   }
   return 0;
}
