#include "people.h"
#include <iostream>

using namespace std;

int main()
{
    People person;
    const int NAME_SIZE = 51;
    const int ADDRESS_SIZE = 51;
    const int PHONE_SIZE = 14;
    char input[51];
    int intInput;
    double doubleInput;
    char again;

    do
    {
        // Get data about a person.
        cout << "Enter the following data about a person:\n";

        cout << "Name: ";
        cin.getline(input, NAME_SIZE);
        person.setName(input);

        cout << "Address: ";
        cin.getline(input, ADDRESS_SIZE);
        person.setAddress(input);

        cout << "Age: ";
        cin >> intInput;
        person.setAge(intInput);
        cin.ignore(); // Skip over the remaining newline.
        cin.clear();

        cout << "Phone: ";
        cin.getline(input, PHONE_SIZE);
        person.setPhone(input);

        cout << "Salary: ";
        cin >> doubleInput;
        person.setSalary(doubleInput);
        cin.ignore();

        // Write the contents of the person structure to the file.
        person.writeToFile(person);

        // Determine wheter the user wants to write another record.
        cout << "Do you want to enter another record? ";
        cin >> again;
        cin.ignore(); // Skip over the remaining newline.
    } while (again == 'Y' || again == 'y');

    cout << endl;

    People ppl;
    ppl.readFromFile(ppl);

    return 0;
}