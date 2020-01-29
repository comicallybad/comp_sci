#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    double seed = time(0);

    srand(seed);

    int max = 10;
    int min = 1;

    cout << (rand() % (max - min) + 1) << endl
         << (rand() % (max - min) + 1) << endl
         << (rand() % (max - min) + 1) << endl;

    return 0;
}