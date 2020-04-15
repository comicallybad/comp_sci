// This program demonstrates an array of class object.
#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
using namespace std;

int main()
{
	const int NUM_ITEMS = 5;
	InventoryItem inventory[NUM_ITEMS] = {
		InventoryItem("Hammer", 6.95, 12),
		InventoryItem("Wrench", 8.75, 20),
		InventoryItem("Pliers", 3.75, 10),
		InventoryItem("Ratchet", 7.95, 14),
		InventoryItem("Screwdriver", 2.50, 22)};

	cout << setw(14) << "Inventory Item"
		 << setw(8) << "Cost" << setw(8)
		 << setw(16) << "Units on Hand\n";
	cout << "-------------------------------------\n";

	for (int i = 0; i < NUM_ITEMS; i++)
	{
		cout << setw(14) << inventory[i].getDescription();
		cout << setw(8) << inventory[i].getCost();
		cout << setw(7) << inventory[i].getUnits() << endl;
	}

	int inventoryCount;
	for (int i = 0; i < NUM_ITEMS; i++)
	{
		inventoryCount += inventory[i].getUnits();
	}

	cout << "The total inventory count is: " << inventoryCount << " units." << endl;

	double inventoryPrice;
	for (int i = 0; i < NUM_ITEMS; i++)
	{
		inventoryPrice += (inventory[i].getUnits() * inventory[i].getCost());
	}

	cout << setprecision(5) << "The total inventory price is: $" << inventoryPrice << endl;

	double avgPrice = inventoryPrice / inventoryCount;

	cout << setprecision(3) << "The average inventory item price is: $" << avgPrice << endl;

	return 0;
}