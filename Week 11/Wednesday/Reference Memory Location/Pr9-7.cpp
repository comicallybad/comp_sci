// This program uses subscript notation with a pointer variable and
// pointer notation with an array name.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_COINS = 5;
   int coins[NUM_COINS] = {1, 2, 3, 4, 5};
   int *doublePtr;   // Pointer to a double
   int count;           // Array index

   // Assign the address of the coins array to doublePtr.
   doublePtr = coins;

   // Display the contents of the coins array. Use subscripts
   // with the pointer!
   cout << "Here are the values in the coins array:\n";
   for (count = 0; count < NUM_COINS; count++)
   {
	   cout << doublePtr[count] << " ";
   }
   cout << endl;
   for (count = 0; count < NUM_COINS; count++)
   {
	   cout << coins[count] << " ";
   }

   // Display the contents of the array again, but this time
   // use pointer notation with the array name!
   cout << "\nAnd here they are again:\n";
   char junk;
   for (count = 0; count < NUM_COINS; count++)
   {
//	   cout << "Contents at coins + " << count << ": ";
//	   cout << "At memory address " << (doublePtr+count) << ": ";
//	   cout << "content is: " << *(doublePtr + count) << " ";
	   cout << endl;
	   cout << "At memory address " << &(coins[count]) << ": ";
	   cout << "At memory address " << (doublePtr + count) << " ";
	   cout << "Content is: " << *(doublePtr + count) << " ";
	   cout << endl;
   }
   cout << "The number of elements stored in contigous memory is: ";
   cout << sizeof(coins) / sizeof(coins[0]) << endl;
   cout << endl;

  
   cin >> junk;
   return 0;
}