#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include "calculusTestScores.h"
using namespace std;

int main()
{
    ifstream myFile;
    ofstream myOutFile("processedData.txt");

    CalculusTestScores cts;

    string myNames[10], tempString;
    int scores[10], tempScore;

    int myMatrix[3][4];

    myFile.open("names.txt");

    for (int i = 0; i < 10; i++)
    {
        myFile >> tempString >> tempScore;
        myNames[i] = tempString;
        scores[i] = tempScore;
    }
    cts.printNames(myNames, scores, 10, myOutFile);

    int tempNum = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            myMatrix[i][j] = pow(tempNum, 2);
            tempNum++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << myMatrix[i][j] << ", ";
            myOutFile << myMatrix[i][j] << ", ";
        }
        cout << endl;
        myOutFile << endl;
    }
    myFile.close();
    myOutFile.close();
    return 0;
}