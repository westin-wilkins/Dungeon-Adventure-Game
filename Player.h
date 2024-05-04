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
    explicit Player(int health);

    //  Methods
    void printInventory() const;

    void addToInventory(const std::string& item);

    //  Getter methods


    //  Setter methods
    void setEquippedItem(const Weapon& weapon);
};

