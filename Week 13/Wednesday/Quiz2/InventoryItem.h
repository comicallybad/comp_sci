// This class has overloaded constructors.
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H
#include <string>
using namespace std;

class InventoryItem
{
private:
   string description; // The item description
   double cost;        // The item cost
   int units;          // Number of units on hand
public:
   // Constructor #1 (default constructor)
   InventoryItem()
   { // Initialize description, cost, and units.
      description = "";
      cost = 0.0;
      units = 0;
   }

   // Constructor #2
   InventoryItem(string desc)
   { // Assign the value to description.
      description = desc;

      // Initialize cost and units.
      cost = 0.0;
      units = 0;
   }

   // Constructor #3
   InventoryItem(string desc, double c, int u)
   { // Assign values to description, cost, and units.
      description = desc;
      cost = c;
      units = u;
   }

   // Mutator functions
   void setDescription(string);

   void setCost(double);

   void setUnits(int);

   // Accessor functions
   string getDescription() const;

   double getCost() const;

   int getUnits() const;

   int getCount(InventoryItem[], int) const;
};
#endif