#include "testScores.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int TestScores::getNumStudents()
{
    int students = 0;
    cout << "Please provide the number of students: ";
    cin >> students;

    while (students <= 0)
    {
        cin.clear();
        cin.ignore();
        cout << "Please provide a valid number of students: ";
        cin >> students;
    }

    return students;
}

string *TestScores::getNames(int numStudents)
{
    string *arr = nullptr; // Array to hold the numbers
    string tempName;

    arr = new string[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Please provide the name for student " << i + 1 << ": ";
        cin >> tempName;

        arr[i] = tempName;
    }
    return arr;
}

double *TestScores::getScores(int numStudents, string *studentNames)
{
    double *arr = nullptr; // Array to hold the numbers
    double tempScore;

    arr = new double[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        cout << "Please provide the score for " << studentNames[i] << ": ";
        cin >> tempScore;
        while (tempScore < 0)
        {
            cin.clear();
            cin.ignore();
            cout << "Please provide a valid score for " << studentNames[i] << ": ";
            cin >> tempScore;
        }
        arr[i] = tempScore;
    }

    return arr;
}

double TestScores::getAverage(int numStudents, double *scores)
{
    double total = 0, average;
    for (int i = 0; i < numStudents; i++)
    {
        total += scores[i];
    }
    average = total / numStudents;

    return average;
}

void TestScores::sortScores(int numStudents, double *scores, string *names)
{
    int tempScore;
    string tempName;

    for (int i = 0; i < numStudents; i++)
    {
        for (int j = 0; j < numStudents - 1 - i; j++)
        {
            if (scores[j] > scores[j + 1])
            {
                tempScore = scores[j];
                tempName = names[j];
                scores[j] = scores[j + 1];
                names[j] = names[j + 1];
                scores[j + 1] = tempScore;
                names[j + 1] = tempName;
            }
        }
    }
    cout << "Sorted Scores:" << endl;

    for (int x = 0; x < numStudents; x++)
    {
        cout << names[x] << " scored: " << scores[x] << endl;
    }
}