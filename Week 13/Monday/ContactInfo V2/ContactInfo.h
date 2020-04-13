// Contact class specification file (version 2)
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <string> // Needed for strlen and strcpy

using namespace std;

// ContactInfo class declaration.
class ContactInfo
{
private:
	string name;  // The contact's name
	string phone; // The contact's phone number
	int age;

	void initName(string n);

	void initPhone(string p);

	void initAge(int a);

public:
	//Default Constructor
	ContactInfo()
	{
		initName("James bond");
		initPhone("555-555");
		initAge(0);
	}

	// Constructor
	ContactInfo(string n, string p, int a)
	{
		// Initialize the name attribute.
		initName(n);

		// Initialize the phone attribute.
		initPhone(n);

		//Initialize the age
		initAge(a);
	}

	// Destructor
	~ContactInfo()
	{
	}

	const string getName();

	const string getPhoneNumber();

	const int getAge();
};
#endif