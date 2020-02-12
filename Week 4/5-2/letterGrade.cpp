#include "letterGrade.h"
#include <iostream>

using namespace std;

void letterGrade::computeLetterGrade()
{
    cout << "How many students do you have grades for? ";
    cin >> numStudents;

    student = 1;

    while (student <= numStudents)
    {
        cout << "\nEnter the numeric test score for student #"
             << student << ": ",
            cin >> testScore;

        while (testScore < 0)
        {
            cout << "\nPlease enter a valid numeric test score for student #"
                 << student << ": ",
                cin >> testScore;
        }

        if (testScore >= MIN_A_SCORE)
            grade = 'A';
        else if (testScore >= MIN_B_SCORE)
            grade = 'B';
        else if (testScore >= MIN_C_SCORE)
            grade = 'C';
        else if (testScore >= MIN_D_SCORE)
            grade = 'D';
        else if (testScore >= MIN_POSSIBLE_SCORE)
            grade = 'F';

        cout << "The letter grade is " << grade << ".\n";

        student++;
    }
};

void letterGrade::bye()
{
    cout << "See you later!";
};