#include <iostream>
#include <string>
#include <vector>
#include "Inventory.h"


//  Methods
void Inventory::addItem(const std::string& item)
{
    inventory.push_back(item);
}

void Inventory::deleteItem(size_t index)        //  Change so that item is dropped 
                                                //  added to room contents instead of deleted
{
    if (index >= 1 && index <= inventory.size())
    {
        std::cout << "Deleted " << inventory[index - 1] << " from inventory." << std::endl;
        inventory.erase(inventory.begin() + index - 1);
    }
    else
    {
        std::cout << "Invalid item number." << std::endl;
    }
}

//  Getter methods
const std::vector<std::string>& Inventory::getItems() const
{
    return inventory;
}