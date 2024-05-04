#pragma once
#include <iostream>
#include <string>
#include "inventory.h"
#include "Unit.h"

class Player : public Unit
{
private:
    Inventory playerInventory;

public:
    //  Constructor declaration
    explicit Player(int health);

    //  Methods
    void addToInventory(const std::string& item);

    //  Getter methods
    const Inventory& getPlayerInventory() const
    {
        return playerInventory;
    }

    //  Setter methods
    void setEquippedItem(const Weapon& weapon);
};

