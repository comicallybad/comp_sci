#ifndef SENTENCE_H
#define SENTENCE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Sentence
{
private:
    string content = "";

public:
    void read(fstream &);
    void write(fstream &, fstream &);
};

#endif