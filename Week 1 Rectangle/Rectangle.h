#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void printLengthWidth()
    {
        length = 9;
        width = 8;
        cout << "The length is: " << length << endl;
        cout << "The width is: " << width << endl;
        cout << "The perimter is: " << (2 * length) + (2 * width) << endl;
        cout << "The Area is: " << length * width << endl;

        for (int z = 1; z < 11; z++)
        {
            if (z % 2 == 0)
            {
                cout << "Z is even: " << z << ", ";
            }
            else
            {
                cout << "Z is odd: " << z << ", ";
            }
        }

        cout << endl;

        for (int b = 1; b < 11; b++)
        {
            for (int c = 1; c < 11; c++)
            {
                cout << "B is: " << b << "C is: " << c;
            }
            cout << endl;
        }
    };
};