// This program uses subscript notation with a pointer variable and
// pointer notation with an array name.
#include <iostream>
#include "pointers.h"
using namespace std;

int main()
{
   const int NUM_COINS = 5;
   int coins[NUM_COINS] = {1, 2, 3, 4, 5};
   int *intPtr; // Pointer to a double
   int count;   // Array index

   Pointers p;

   // Display the contents of the coins array. Use subscripts
   // with the pointer!
   p.printValues(coins, intPtr, NUM_COINS);

   // Display the contents of the array again, but this time
   // use pointer notation with the array name!
   p.printAgain(coins, intPtr, NUM_COINS);

   return 0;
}