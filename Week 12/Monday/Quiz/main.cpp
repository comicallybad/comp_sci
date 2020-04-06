#include "quiz.h"
#include <iostream>

using namespace std;

int main()
{
    Quiz q;

    int x = 2;
    int y = 3;

    cout << "Quiz by reference: " << q.doSomething(x, y) << endl;

    x = 2;
    y = 3;

    cout << "Quiz by pointer: " << q.doSomething(x, y) << endl;

    return 0;
}