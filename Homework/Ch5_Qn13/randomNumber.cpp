#include "randomNumber.h"
#include <iostream>
#include <ctime>

using namespace std;

void RandomNumber::start()
{
    srand(time(0));
    random = rand() % 100 + 1;

    cout << "-----Random Number Game-----" << endl;
    displayMessage();
}

void RandomNumber::displayMessage()
{
    guess = 0;
    cout << "Please input your guess: ";
    cin >> guess;

    while (guess < 1)
    {
        cin.clear();
        cin.ignore();
        cout << "Invalid guess. Please re-enter. ";
        cin >> guess;
    }

    check(guess);
};

void RandomNumber::check(int guess)
{
    if (guess > random)
    {
        cout << "Your answer is too high! Try again." << endl;
        displayMessage();
    }
    else if (guess < random)
    {
        cout << "Your answer is too low! Try again." << endl;
        displayMessage();
    }
    else if (guess = random)
    {
        winScreen();
    }
}

void RandomNumber::winScreen()
{
    cout << "\nCongratulations! You got it! Click enter to restart. ";
    cin.get();
    cin.get();
    cout << endl;
    start();
}