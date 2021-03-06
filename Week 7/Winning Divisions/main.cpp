#include "winningDivision.h"
#include <iostream>

using namespace std;

int main()
{
    WinningDivision wd;

    double sales1 = wd.getSales("Northern Division");
    double sales2 = wd.getSales("Eastern Division");
    double sales3 = wd.getSales("Southern Division");
    double sales4 = wd.getSales("Western Division");
    double h;
    string d;

    wd.findHighest(sales1, sales2, sales3, sales4, h, d);

    cout << "The highest division quarterly sales is: "
         << " of division: " << h << " from: " << d << endl;

    return 0;
}