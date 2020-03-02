#include "winningDivision.h"

int main()
{
    WinningDivision wd;

    double sales1 = wd.getSales("Northern Division");
    double sales2 = wd.getSales("Eastern Division");
    double sales3 = wd.getSales("Southern Division");
    double sales4 = wd.getSales("Western Division");

    wd.findHighest(sales1, sales2, sales3, sales4);

    return 0;
}