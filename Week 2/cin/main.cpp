#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string name = " ";

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << name << endl;

    cout << 5 * 5 * 5 * 5 * 5 << endl;
    cout << pow(5, 5) << endl;
    cout << pow(2, 8) << endl;

    cout << 10 + 4 << endl;

    int intValue = 3928;
    double doubleValue = 98.12;
    string stringValue = "John J. Smith";

    cout << setw(5) << intValue << endl
         << setw(8) << doubleValue << endl
         << setw(16) << stringValue << endl;

    double decimal = 98.103128909213;

    cout << setprecision(5) << showpoint << decimal << endl
         << setprecision(4) << showpoint << decimal << endl
         << setprecision(3) << showpoint << decimal << endl
         << setprecision(2) << showpoint << decimal << endl
         << setprecision(1) << showpoint << fixed << decimal << endl;

    return 0;
}