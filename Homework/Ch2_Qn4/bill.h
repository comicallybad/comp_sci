#include <iostream>
using namespace std;

class Bill
{
private:
    const double charge = 44.50;
    const double tax = 0.0675;
    const double tip = 0.15;

public:
    void printBill();
};