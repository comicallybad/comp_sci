#include "sales.h"
#include <iostream>
#include <iomanip>

using namespace std;
//*****************************************************************
// Definition of getSales. This function uses a pointer to accept *
// the address of an array of doubles. The function asks the user *
// user to enter sales figures and stores them in the array.      *
//*****************************************************************
void Sales::getSales(double *arr, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << "Enter the sales figure for quarter ";
        cout << (count + 1) << ": ";
        cin >> arr[count];
    }
}

//*****************************************************************
// Definition of totalSales. This function uses a pointer to      *
// accept the address of an array. The function returns the total *
// of the elements in the array.                                  *
//*****************************************************************
double Sales::totalSales(double *arr, int size)
{
    double sum = 0.0;

    for (int count = 0; count < size; count++)
    {
        sum += *arr;
        arr++;
    }
    return sum;
}