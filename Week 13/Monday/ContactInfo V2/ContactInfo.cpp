#include "ContactInfo.h"
#include <iostream>
#include <iomanip>

using namespace std;

void ContactInfo::initName(string n)
{
    name = n;
}

void ContactInfo::initPhone(string p)
{
    phone = p;
}

void ContactInfo::initAge(int a)
{
    age = a;
}

const string ContactInfo::getName()
{
    return name;
}

const string ContactInfo::getPhoneNumber()
{
    return phone;
}

const int ContactInfo::getAge()
{
    return age;
}