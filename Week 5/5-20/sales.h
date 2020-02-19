#include <fstream>

using namespace std;

class Sales
{
private:
    ifstream inputFile; // File stream object
    string fileName;    // Holds the user entered file name
    int numValues = 0;
    double value, total = 0.0;

public:
    void calculateSales();
    void doStuff();
};