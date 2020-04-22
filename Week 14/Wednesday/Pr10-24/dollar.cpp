#include "dollar.h"
#include <iostream>
#include <string>
using namespace std;

//************************************************************
// Definition of the dollarFormat function. This function    *
// accepts a string reference object, which is assumed to    *
// to hold a number with a decimal point. The function       *
// formats the number as a dollar amount with commas and     *
// a $ symbol.                                               *
//************************************************************

void Dollar::convert()
{
    int dp;

    dp = input.find('.'); // Find decimal point
    input[dp] = ',';

    if (dp > 3) // Insert commas
    {
        for (int x = dp - 3; x > 0; x -= 3)
            input.insert(x, ".");
    }
    input.insert(0, "$"); // Insert dollar sign
    input.append("$");
}

string Dollar::getInput() const
{
    return input;
}