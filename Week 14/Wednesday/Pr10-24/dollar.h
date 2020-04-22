#ifndef DOLLAR_H
#define DOLLAR_H

#include <string>

using namespace std;

class Dollar
{
private:
    string input;

public:
    Dollar()
    {
        input = "1000.00";
    }
    Dollar(string s)
    {
        input = s;
    }

    void convert();

    string getInput() const;
};
#endif