#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Choice 1: Find the area of a Rectangle" << endl
         << "Choice 2: Find the area of a Circle" << endl
         << "Choice 3: Find the area of a Triangle" << endl
         << "Choice 4: Exit Program" << endl;

    int x = 0;
    cout << "Please enter an option 1-4" << endl;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "The area of a Rectangle is length multiplied by width" << endl;
        break;
    case 2:
        cout << "The area of a circle is pi multiplied by the radius squared" << endl;
        break;
    case 3:
        cout << "The area of a Triangle is the width times height divided by 2" << endl;
        break;
    case 4:
        cout << "Exiting the program";
        break;
    default:
        cout << "You entered an invalid option" << endl;
        break;
    }
}