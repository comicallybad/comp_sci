#include "sales.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

void Sales::calculateSales()
{
    // Prompt the user to enter the data file name
    cout << "This program reads and sums the values in a data file.\n";
    cout << "Enter the name of the file to read from: ";
    cin >> fileName;

    // Open the input file
    inputFile.open(fileName);

    // Loop until the EOF is reached
    while (inputFile >> value) // If a value was read, execute the
    {
        numValues++;    // loop again to count the value and
        total += value; // add it to the total
    }
    cout << "\nThe total of the " << numValues << " values is "
         << total << endl;

    // Close the file
    inputFile.close();
};

void Sales::doStuff()
{
    total = 0;
    numValues = 0;

    inputFile.open(fileName);

    while (inputFile >> value) // If a value was read, execute the
    {
        numValues++; // loop again to count the value and
        if ((numValues % 2) == 0)
        {
            total += value; // add it to the total
        }
    }

    cout << "Even number total: " << total << endl;

    inputFile.close();
}