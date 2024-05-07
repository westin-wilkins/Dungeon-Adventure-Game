#pragma once
#include <iostream>
#include <string>
#include "Inventory.h"
#include "Unit.h"
#include "Weapon.h"



class Player : public Unit
{
private:
    Inventory playerInventory;
    Weapon& equippedItem;

public:
    // Constructor declaration
    Player(int health = 100, Weapon& equippedItem = hands);

    // Methods
    void addToInventory(const Weapon& weapon);

    // Getter methods
    const Inventory& getPlayerInventory() const;
    const Weapon& getEquippedItem() const;

    // Setter methods
    void setEquippedItem(const Weapon& weapon);

};

