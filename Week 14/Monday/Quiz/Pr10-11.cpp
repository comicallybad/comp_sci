#include <iostream>
#include <string>
#include <iomanip>
#include "identification.h"

using namespace std;

int main()
{
   string input;

   Identification i;

   cout << "What is your first name? ";
   cin >> input;

   i.setFirstName(input);

   cout << "What is your last name? ";
   cin >> input;

   i.setLastName(input);

   cout << "Your first name is: " << i.getFirstName() << endl;
   cout << "Your last name is: " << i.getLastName() << endl;
   cout << "Your name is: " << i.getLength(i.getFirstName(), i.getLastName()) << " characters long." << endl;
   cout << "Your name in reverse order is: " << i.getLastName() << ", " << i.getFirstName() << endl;

   return 0;
}