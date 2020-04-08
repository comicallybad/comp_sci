#include <string>
using namespace std;

class TestScores
{
private:
public:
    int getNumStudents();
    string *getNames(int);
    double *getScores(int, string *);
    double getAverage(int, double *);
    void sortScores(int, double *, string *names);
};