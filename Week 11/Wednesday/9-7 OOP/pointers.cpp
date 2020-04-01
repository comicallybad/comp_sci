#include <iostream>
#include "pointers.h"

using namespace std;

void Pointers::printValues(int coins[], int *intPtr, int NUM_COINS)
{
    // Assign the address of the coins array to intPtr.
    intPtr = coins;
    cout << "Here are the values in the coins array:\n";
    for (int i = 0; i < NUM_COINS; i++)
    {
        cout << intPtr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < NUM_COINS; i++)
    {
        cout << coins[i] << " ";
    }
}

void Pointers::printAgain(int coins[], int *intPtr, int NUM_COINS)
{
    intPtr = coins;
    cout << "\nAnd here they are again:\n";

    for (int i = 0; i < NUM_COINS; i++)
    {
        cout << "Contents at coins[" << i << "]: ";
        cout << "At memory address " << (intPtr + i) << ": ";
        cout << "content is: " << *(intPtr + i) << " ";
        cout << endl;
        cout << "At memory address " << &(coins[i]) << ": ";
        cout << "At memory address " << (intPtr + i) << " ";
        cout << "Content is: " << *(intPtr + i) << " ";
        cout << endl;
    }
    cout << "The number of elements stored in contigous memory is: ";
}