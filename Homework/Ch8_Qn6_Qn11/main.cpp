#include "sortRead.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim", "Griffen, Jim",
                               "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean",
                               "Weaver, Jim", "Pore, Bob", "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy", "Pike, Gordon", "Holland, Beth"};

    SortRead sr;

    sr.selectionSort(names, NUM_NAMES);

    for (string name : names)
    {
        cout << name << ", ";
    }

    cout << "\n\n";

    ifstream myFile;
    myFile.open("names.txt");
    string tempName;
    string nameArray[20];

    for (int i = 0; i < 20; i++)
    {
        myFile >> tempName;
        nameArray[i] = tempName;
    }

    myFile.close();

    sr.selectionSort(nameArray, 20);

    for (string name : nameArray)
    {
        cout << name << ", ";
    }

    return 0;
}