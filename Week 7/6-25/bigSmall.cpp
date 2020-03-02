#include "bigSmall.h"
#include <iostream>
#include <iomanip>

using namespace std;

void BigSmall::init()
{
    int small, big;

    // Call getNums to input the two numbers
    getNums(small, big);

    // Call orderNums to put the numbers in order
    orderNums(small, big);

    // Display the new values
    cout << "The two input numbers ordered smallest to biggest are "
         << small << " and " << big << endl;
}

void BigSmall::getNums(int &input1, int &input2)
{
    cout << "Enter an integer: ";
    cin >> input1;
    cout << "Enter a second integer: ";
    cin >> input2;
}

void BigSmall::orderNums(int &num1, int &num2)
{
    int temp;

    if (num1 > num2) // If the numbers are out of order, swap them
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}