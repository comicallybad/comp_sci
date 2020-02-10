#include "minMax.h"
#include <iostream>
using namespace std;

void minMax::findMinMax()
{
    int big, small;
    //Ask user for 2 numbers
    cout << "Please enter 2 numbers: " << endl;
    cin >> num1 >> num2;

    big = (num1 > num2 ? num1 : num2);
    small = (num1 < num2 ? num1 : num2);

    cout << "The maximum number is: " << big << endl;
    cout << "The minimum number is: " << small << endl;
};