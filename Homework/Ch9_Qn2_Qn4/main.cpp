#include "testScores.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    TestScores ts;

    double *testScores;
    string *studentNames;

    int numStudents;

    numStudents = ts.getNumStudents();
    studentNames = ts.getNames(numStudents);
    testScores = ts.getScores(numStudents, studentNames);
    cout << setprecision(4) << "The average test score is: " << ts.getAverage(numStudents, testScores) << endl;
    ts.sortScores(numStudents, testScores, studentNames);

    return 0;
}