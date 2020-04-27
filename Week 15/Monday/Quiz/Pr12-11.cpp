#include <iostream>
#include <fstream>
#include "Sentence.h"
using namespace std;

int main()
{
	fstream inputFile;
	fstream outputFile;

	Sentence s;

	s.read(inputFile);
	s.write(inputFile, outputFile);

	return 0;
}