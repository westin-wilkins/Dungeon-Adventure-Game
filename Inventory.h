#pragma once
#include <iostream>
#include <string>
#include <vector>

class Inventory
{
private:
    std::vector<std::string> inventory;

public:
    void printInventory() const;

    void addItem(const std::string& item);

    void deleteItem(size_t index);
};
