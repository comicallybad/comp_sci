#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int temp = 0;
    bool rain = false;
    char in = ' ';

    cout << "What temperature is it?" << endl;
    cin >> temp;
    cout << "Is it raining? Type \"Y\" or \"N\"" << endl;
    cin >> in;

    if (in == 'Y' || in == 'y')
    {
        rain = true;
    }
    else if (in == 'N' || in == 'n')
    {
        rain = false;
    }
    else
    {
        cout << "Please input a valid answer";
    }

    if (temp < 32)
    {
        if (rain == true)
        {
            cout << "Put on a heavy coat and boots!" << endl;
        }
        else
        {
            cout << "Don't forget a coat!" << endl;
        }
    }
    else if (temp >= 32 && temp < 70)
    {
        if (rain == true)
        {
            cout << "Grab a rain coat!" << endl;
        }
        else
        {
            cout << "Wear long sleeves!" << endl;
        }
    }
    else
    {
        if (rain == true)
        {
            cout << "At least the rain cools it down a little bit." << endl;
        }
        else
        {
            cout << "It is way too hot out. Stay inside" << endl;
        }
    }
}