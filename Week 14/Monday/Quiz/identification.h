#ifndef IDENTIFICATION_H
#define IDENTIFICATION_H

#include <string>

using namespace std;

class Identification
{
private:
    string firstName;
    string lastName;

public:
    void setLastName(string);
    string getFirstName();
    void setFirstName(string);
    string getLastName();
    string reverse(string, string);
    int getLength(string, string);
};
#endif