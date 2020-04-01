#include <iostream>
#include <string>
#include "sortRead.h"

using namespace std;

void SortRead::selectionSort(string names[], int size)
{
    string temp = "";
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 19 - i; j++)
        {
            names[j] > names[j + 1]
                ? temp = names[j + 1],
                  names[j + 1] = names[j], names[j] = temp : names[j + 1] = names[j + 1];
        }
}