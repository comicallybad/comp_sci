#include "interest.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void Interest::findInterest()
{
    double totalAmount;
    cout << "\tCalculate Interest Earned" << endl;
    cout << "Please input the principal: ";
    cin >> principal;
    cout << "Please input the interest rate: ";
    cin >> interestRate;
    cout << "Please input the number of times the interest compounds: ";
    cin >> numberOfTimes;

    totalAmount = principal * pow((1 + ((interestRate/100)/numberOfTimes)), numberOfTimes);

    cout << fixed << showpoint <<setprecision(2)
    << "Interest rate: \t\t" << interestRate <<"%"<< endl
    << "Times compounded: \t" << numberOfTimes << endl
    << "Principal: \t\t$" << principal << endl
    <<"Interest: \t\t$" << totalAmount - principal << endl
    <<"Amount in savings: \t$" << totalAmount << endl;
};