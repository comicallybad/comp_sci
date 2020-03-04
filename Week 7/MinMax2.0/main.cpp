#include "minMax.h"
#include <iostream>

using namespace std;

int main()
{
    MinMax mm;
    int total, lowest, highest;

    mm.generateStore();
    total = mm.doSum();
    cout << "The total is: " << total << endl;
    mm.findMinMax(lowest, highest);
    cout << "Highest is: " << highest << endl;
    cout << "Lowest is: " << lowest << endl;

    cout << "\n\nMin is: " << mm.findMin() << endl;
    cout << "Max is: " << mm.findMax() << endl;

    return 0;
}