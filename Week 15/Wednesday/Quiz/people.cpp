#include "people.h"
#include <iostream>
#include <fstream>
using namespace std;

void People::setName(char input[])
{
    int count = 0;
    while (input[count] != '\0')
    {
        name[count] = input[count];
        count++;
    }
}

char *People::getName()
{
    return name;
}

void People::setAge(int input)
{
    age = input;
}

int People::getAge()
{
    return age;
}

void People::setAddress(char input[])
{
    int count = 0;
    while (input[count] != '\0')
    {
        address[count] = input[count];
        count++;
    }
}

char *People::getAddress()
{
    return address;
}

void People::setPhone(char input[])
{
    int count = 0;
    while (input[count] != '\0')
    {
        phone[count] = input[count];
        count++;
    }
}

char *People::getPhone()
{
    return phone;
}

void People::setSalary(double input)
{
    salary = input;
}

double People::getSalary()
{
    return salary;
}

void People::writeToFile(People person)
{
    fstream peopleFile("people.dat", ios::app | ios::binary);

    if (!peopleFile)
    {
        cout << "Error opening file. Program aborting.\n";
    }
    else
    {
        peopleFile.write(reinterpret_cast<char *>(&person), sizeof(person));
        peopleFile.close();
    }
}

void People::readFromFile(People person)
{
    fstream peopleFile;
    peopleFile.open("people.dat", ios::in | ios::binary);
    if (!peopleFile)
    {
        cout << "Error opening file. Program aborting.\n";
    }
    else
    {
        cout << "Here are the people in the file: \n\n";
        // Read the first record from the file.
        peopleFile.read(reinterpret_cast<char *>(&person), sizeof(person));

        // While not at the end of the file,
        // display the records.
        while (!peopleFile.eof())
        {
            // Display the record.
            cout << "Name: ";
            cout << person.name << endl;
            cout << "Age: ";
            cout << person.age << endl;
            cout << "Address line: ";
            cout << person.address << endl;
            cout << "Phone: ";
            cout << person.phone << endl;
            cout << "Salary: ";
            cout << person.salary << endl;

            // Wait for the user to press the Enter key.
            cout << "\nPress the Enter key to see the next record.\n";
            cin.get();

            // Read the next record from the file.
            peopleFile.read(reinterpret_cast<char *>(&person), sizeof(person));
        }

        // Close the file.
        cout << "That's all the data in the file!\n";
        peopleFile.close();
    }
}