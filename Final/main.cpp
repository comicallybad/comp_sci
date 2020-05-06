#include "circle.h"
#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
    fstream inputFile("radius.txt", ios::in);
    fstream outputFile("radius.dat", ios::out | ios::binary);

    Circle cir;

    int *radius = nullptr;
    int SIZE = 0;
    int temp;

    while (!inputFile.eof())
    {
        inputFile >> temp;
        SIZE++;
    }

    radius = new int[SIZE];

    inputFile.close();
    inputFile.open("radius.txt", ios::in);

    int count = 0;
    while (!inputFile.eof())
    {
        inputFile >> temp;
        radius[count] = temp;
        count++;
    }

    inputFile.close();

    outputFile.write(reinterpret_cast<char *>(radius), sizeof(radius));

    outputFile.close();

    inputFile.open("radius.dat", ios::in | ios::binary);

    int newRadius[SIZE];

    inputFile.read(reinterpret_cast<char *>(radius), sizeof(radius));

    for (int i = 0; i < SIZE; i++)
        newRadius[i] = radius[i];

    fstream dataOutput("data.txt", ios::out);

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\nFor a radius size of: " << newRadius[i];
        dataOutput << "\nFor a radius size of: " << newRadius[i];
        cir.setRadius(newRadius[i]);
        cout << "\nThe circle area is: " << cir.getArea();
        dataOutput << "\nThe circle area is: " << cir.getArea();
        cout << "\nThe circle diameter is: " << cir.getDiameter();
        dataOutput << "\nThe circle diameter is: " << cir.getDiameter();
        cout << "\nThe circle circumference is: " << cir.getCircumference();
        dataOutput << "\nThe circle circumference is: " << cir.getCircumference() << endl;
    }

    dataOutput.close();

    return 0;
}