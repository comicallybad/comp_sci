#include "head.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Head::read(fstream &input)
{
    string line;
    input.open("head.txt", ios::in);
    char ch;
    int newLineCount = 0;
    if (input)
    {
        while (!input.eof() && newLineCount != 10)
        {
            getline(input, line, '\n');
            // if(newLineCount < 10)
            newLineCount++;
            cout << endl
                 << line;
        }
        cout << endl;

        if (newLineCount <= 9)
        {
            cout << "End of file was reached before 10 lines." << endl;
        }
    }
    else
    {
        cout << "could not read file.";
    }
}