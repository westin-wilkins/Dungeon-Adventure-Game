#pragma once
#include <iostream>
#include <string>
#include <vector>

class Inventory
{
private:
    std::vector<std::string> inventory;

public:
    //  Methods
    void addItem(const std::string& item);

    void deleteItem(size_t index);

    //  Getter methods
    const std::vector<std::string>& getItems() const;
};
