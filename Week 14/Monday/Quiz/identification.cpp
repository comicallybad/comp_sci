#include "identification.h"
#include <cstring>
#include <iostream>
#include <iomanip>

using namespace std;

void Identification::setFirstName(string first)
{
    firstName = first;
}

void Identification::setLastName(string last)
{
    lastName = last;
}

string Identification::getFirstName()
{
    return firstName;
}

string Identification::getLastName()
{
    return lastName;
}

string Identification::reverse(string first, string last)
{
    string temp = last + ", " + first;

    return temp;
}

int Identification::getLength(string first, string last)
{
    int length = first.length() + last.length();
    return length;
}