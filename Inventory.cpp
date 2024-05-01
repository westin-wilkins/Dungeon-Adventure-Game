#include <iostream>
#include <string>
#include <unordered_map>
#include "Inventory.h"


void Inventory::printInventory() const
{
    std::unordered_map<std::string, int> itemCounts;

    // Count the occurrences of each item
    for (const std::string& item : inventory)
    {
        itemCounts[item]++;
    }

    std::cout << "Inventory:\n";
    for (const auto& pair : itemCounts)
    {
        std::cout << "-" << pair.first << " x" << pair.second << std::endl;
    }
}

void Inventory::addItem(const std::string& item)
{
    inventory.push_back(item);
}

void Inventory::deleteItem(const std::string& item)
{
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end())
    {
        inventory.erase(it);
        std::cout << "Deleted " << item << " from inventory." << std::endl;
    }
    else
    {
        std::cout << "Item not found." << std::endl;
    }
}
