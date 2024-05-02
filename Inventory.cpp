#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"


void Inventory::printInventory() const
{
    // Count the occurrences of each item
    std::cout << "Inventory:\n";
    for (size_t i = 0; i < inventory.size(); i++)
    {
        std::cout << i + 1 << ". " << inventory[i] << std::endl;
    }
}

void Inventory::addItem(const std::string& item)
{
    inventory.push_back(item);
}

void Inventory::deleteItem(size_t index)
{
    if (index >= 1 && index <= inventory.size())
    {
        std::cout << "Deleted" << inventory[index - 1] << " from inventory." << std::endl;
        inventory.erase(inventory.begin() + index - 1);
    }
    else
    {
        std::cout << "Invalid item number." << std::endl;
    }
}
