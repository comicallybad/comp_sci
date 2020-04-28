#include "head.h"
#include <fstream>

using namespace std;

int main()
{
    Head h;
    fstream inputFile;

    h.read(inputFile);

    return 0;
}