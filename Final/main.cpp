#include "circle.h"
#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

int main()
{
    fstream radiusFileInput("radius.txt", ios::in);
    fstream radiusOutputFile("radius.dat", ios::out | ios::binary);

    Circle c;

    int *radius = nullptr;
    int SIZE = 0;
    int temp;

    while (!radiusFileInput.eof())
    {
        radiusFileInput >> temp;
        SIZE++;
    }

    radius = new int[SIZE];

    radiusFileInput.close();
    radiusFileInput.open("radius.txt", ios::in);

    int count = 0;
    while (!radiusFileInput.eof())
    {
        radiusFileInput >> temp;
        radius[count] = temp;
        count++;
    }

    radiusFileInput.close();

    radiusOutputFile.write(reinterpret_cast<char *>(radius), sizeof(radius));

    radiusOutputFile.close();

    radiusFileInput.open("radius.dat", ios::in | ios::binary);

    int newRadius[SIZE];

    radiusFileInput.read(reinterpret_cast<char *>(radius), sizeof(radius));

    for (int i = 0; i < SIZE; i++)
        newRadius[i] = radius[i];

    fstream dataOutput("data.txt", ios::out);

    for (int i = 0; i < SIZE; i++)
    {
        cout << "\n---For a radius size of: " << newRadius[i] << "---";
        dataOutput << "\n---For a radius size of: " << newRadius[i] << "---";
        c.setRadius(newRadius[i]);
        cout << "\nThe circle area is: " << c.getArea();
        dataOutput << "\nThe circle area is: " << c.getArea();
        cout << "\nThe circle diameter is: " << c.getDiameter();
        dataOutput << "\nThe circle diameter is: " << c.getDiameter();
        cout << "\nThe circle circumference is: " << c.getCircumference();
        dataOutput << "\nThe circle circumference is: " << c.getCircumference() << endl;
    }

    dataOutput.close();

    return 0;
}