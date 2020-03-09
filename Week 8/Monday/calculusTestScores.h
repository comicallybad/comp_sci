#include <iostream>
#include <fstream>

using namespace std;

class CalculusTestScores
{
private:
    ifstream myFile;
    string myNames[10], tempString;

public:
    void printNames(string s[], int calcScores[], int nElements, ofstream &of);
};