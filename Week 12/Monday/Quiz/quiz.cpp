#include "quiz.h"
#include <iostream>

using namespace std;

int Quiz::doSomething(int &x, int &y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

int Quiz::doSomethingV2(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}