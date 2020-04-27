#include "sentence.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Sentence::read(fstream &input)
{
    input.open("input.txt", ios::in);
    string line;
    int count = 0;
    if (input)
    {
        while (!input.eof())
        {
            getline(input, line, '\0');
            cout << line;
        }
    }
    input.close();
}
void Sentence::write(fstream &input, fstream &output)
{
    input.open("input.txt", ios::in);
    output.open("output.txt", ios::app);
    string line;
    int count = 0;
    if (input)
    {
        while (!input.eof())
        {
            getline(input, line, '\0');
        }
    }
    output.put('\n');

    while (line[count] != '\0')
    {
        output.put(line[count]);
        count++;
    }

    output.close();
    input.close();
}