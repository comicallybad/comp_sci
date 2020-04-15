#include "InventoryItem.h"

void InventoryItem::setDescription(string d)
{
    description = d;
}

void InventoryItem::setCost(double c)
{
    cost = c;
}

void InventoryItem::setUnits(int u)
{
    units = u;
}

string InventoryItem::getDescription() const
{
    return description;
}

double InventoryItem::getCost() const
{
    return cost;
}

int InventoryItem::getUnits() const
{
    return units;
}
