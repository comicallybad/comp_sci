#include "payRoll.h"

using namespace std;

int main()
{
    PayRoll pr;

    pr.display();
    pr.calculateWages();
    pr.displayWages();

    return 0;
}