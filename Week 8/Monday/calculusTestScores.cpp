#include "calculusTestScores.h"
#include <iostream>
#include <iomanip>

using namespace std;

void CalculusTestScores::printNames(string s[], int calcScores[], int nElements, ofstream &myOutFile)
{
    for (int i = 0; i < nElements; i++)
    {
        cout << left << setw(8) << s[i] << " scored: " << right << setw(3) << calcScores[i] << " on the calc test." << endl;
        myOutFile << left << setw(8) << s[i] << " scored: " << right << setw(3) << calcScores[i] << " on the calc test." << endl;
    }
}