#include "customer.h"
#include <string>

using namespace std;

//**********************************************************
// Definition of function testNum.                         *
// This function determines whether the custNum parameter  *
// holds a valid customer number. The size parameter is    *
// the size of the custNum array.                          *
//**********************************************************

bool Customer::testNum(char custNum[], int size)
{
    int count; // Loop counter

    // Test the first three characters for alphabetic letters.
    for (count = 0; count < 6; count++)
        if (count % 2 == 0)
        {
            if (!isalpha(custNum[count]))
                return false;
        }
        else if (!isdigit(custNum[count]))
            return false;

    if (count == 6)
    {
        if (!isspace(custNum[count]))
            return false;
        else
            count++;
    }

    // Test the remaining characters for numeric digits.
    for (count = 7; count < size - 1; count++)
    {
        if (count % 2 == 1)
        {
            if (!isdigit(custNum[count]))
                return false;
        }
        else if (!isalpha(custNum[count]))
            return false;
    }
    return true;
}