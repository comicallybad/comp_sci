#include "sort.h"
#include <iostream>

void Sort::arraySort()
{
    int temp;
    for (int i = 0; i < sizeof(arrayList) / sizeof(arrayList[0]); i++)
        for (int j = 0; j < (sizeof(arrayList) / sizeof(arrayList[0])) - 1 - i; j++)
            arrayList[j] > arrayList[j + 1] ? temp = arrayList[j + 1], arrayList[j + 1] = arrayList[j], arrayList[j] = temp : arrayList[j + 1] = arrayList[j + 1];
    for (int p = 0; p < sizeof(arrayList) / sizeof(arrayList[0]); p++)
        p < sizeof(arrayList) / sizeof(arrayList[0]) - 1 ? cout << arrayList[p] << ", " : cout << arrayList[p] << endl;
};