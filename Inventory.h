#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Weapon.h"


class Inventory
{
private:
    std::vector<std::string> inventory;
                                            //  Need to add a max inventory size

public:
    //  Methods
    void addItem(const Weapon& weapon);

    void deleteItem(size_t index);

    //  Getter methods
    const std::vector<std::string>& getItems() const;
};
