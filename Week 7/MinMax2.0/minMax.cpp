#include "minMax.h"
#include <iostream>
#include <iomanip>
#include <cstdlib> //for rand()

using namespace std;

void MinMax::generateStore()
{
    srand(time(0));
    for (int i = 0; i < 50; i++)
        numbers[i] = rand() % (15 + 1); //random number 1-15

    for (int x = 0; x < 50; x++)
        cout << numbers[x] << endl;
}

int MinMax::doSum()
{
    int total;
    for (int i = 0; i < 50; i++)
        total += numbers[i];

    return total;
}

void MinMax::findMinMax(int &min, int &max)
{
    min = numbers[0];
    max = numbers[0];
    for (int i = 0; i < 50; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        if (numbers[i] > max)
            max = numbers[i];
    }
    //min and max passed by reference so the caller will see the result
}

int MinMax::findMin()
{
    int min;
    for (int i = 0; i < 50; i++)
        if (numbers[i] < min)
            min = numbers[i];
    return min;
}
int MinMax::findMax()
{
    int max;
    for (int i = 0; i < 50; i++)
        if (numbers[i] > max)
            max = numbers[i];
    return max;
}