#include "MyReader.h"
#include <iostream>

using namespace std;

int main()
{
    myReader mr;
    int total;
    double average;

    mr.read();
    mr.output();
    mr.doubleNums();
    mr.sort();
    mr.totalAndAverage(total, average);
    cout << "\nTotal: " << total << ", Average: " << average;
    mr.write(total, average);

    return 0;
}