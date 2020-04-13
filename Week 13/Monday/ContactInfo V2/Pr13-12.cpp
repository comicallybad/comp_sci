// This program demonstrates a class with a destructor.
#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
	ContactInfo entry("Kristen Lee", "555-2021", 25);
	ContactInfo blank;

	cout << "Name: " << entry.getName() << endl;
	cout << "Phone Number: " << entry.getPhoneNumber() << endl;
	cout << "Age: " << entry.getAge() << endl;

	cout << endl;

	cout << "Name: " << blank.getName() << endl;
	cout << "Phone Number: " << blank.getPhoneNumber() << endl;
	cout << "Age: " << blank.getAge() << endl;

	return 0;
}