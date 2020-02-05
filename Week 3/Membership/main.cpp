#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    int choice = 0;
    int months = 0;
    int charge = 0;

    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << "\n\tHealth Club Membership Selection\n\n"
             << "1. Standard Adult Membership\n"
             << "2. Child Membership\n"
             << "3. Senior Membership\n"
             << "4. Quit Program\n"
             << "Please enter your choice: ";
        cin >> choice;

        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        if (choice != QUIT_CHOICE)
        {
            cout << "For how many months? ";
            cin >> months;

            switch (choice)
            {
            case ADULT_CHOICE:
                charge = months * ADULT;
                break;
            case CHILD_CHOICE:
                charge = months * CHILD;
                break;
            case SENIOR_CHOICE:
                charge = months * SENIOR;
                break;
            }
            cout << "The total charges are: $"
                 << charge << endl;
        }
    } while (choice != QUIT_CHOICE);
    return 0;
}