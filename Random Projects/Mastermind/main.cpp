#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    char colors[4];

    srand(time(0));
    int randomint = (rand() % 5) + 1;

    for (int i = 0; i < 4; i++)
    {
        randomint = (rand() % 5) + 1;

        switch (randomint)
        {
        case 1:
            colors[i] = 'R';
            break;
        case 2:
            colors[i] = 'B';
            break;
        case 3:
            colors[i] = 'Y';
            break;
        case 4:
            colors[i] = 'P';
            break;
        case 5:
            colors[i] = 'G';
            break;
        }
    }

    char usercolors[4];

    cout << "We have our colors!" << endl;
    cout << endl
         << endl;
    int turncounter = 0;
    while (turncounter != 12)
    {
        turncounter++;

        cout << "Current try: " << turncounter << endl;

        for (int i = 0; i < 4; i++)
        {
            cout << "Color " << i << ": ";
            cin >> usercolors[i];
            cout << endl;
        }

        for (int i = 0; i < 4; i++)
        {
            if (usercolors[i] == colors[i])
                cout << "R"
                     << " ";
        }

        if (usercolors[0] == colors[1] ||
            usercolors[0] == colors[2] ||
            usercolors[0] == colors[3])
        {
            cout << "W"
                 << " ";
        }
        if (usercolors[1] == colors[0] ||
            usercolors[1] == colors[2] ||
            usercolors[1] == colors[3])
        {
            cout << "W"
                 << " ";
        }
        if (usercolors[2] == colors[0] ||
            usercolors[2] == colors[1] ||
            usercolors[2] == colors[3])
        {
            cout << "W"
                 << " ";
        }
        if (usercolors[3] == colors[0] ||
            usercolors[3] == colors[1] ||
            usercolors[3] == colors[2])
        {
            cout << "W"
                 << " ";
        }

        cout << endl
             << endl;

        if (usercolors[0] == colors[0] &&
            usercolors[1] == colors[1] &&
            usercolors[2] == colors[2] &&
            usercolors[3] == colors[3])
        {
            cout << "You win! Number of tries: " << turncounter << endl;
            turncounter = 12;
        }
        else
        {
            cout << "Nope." << endl
                 << endl;
        }
    }
    if (turncounter == 12)
    {
        cout << "You lost." << endl;
    }

    cin.get();
    cin.get();
    return 0;
};