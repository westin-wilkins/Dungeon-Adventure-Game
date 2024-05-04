#pragma once
#include <iostream>
#include <string>
#include <vector>

class Inventory
{
private:
    std::vector<std::string> inventory;
                                            //  Need to add a max inventory size

public:
    //  Methods
    void addItem(const std::string& item);

    void deleteItem(size_t index);

    //  Getter methods
    const std::vector<std::string>& getItems() const;
};
