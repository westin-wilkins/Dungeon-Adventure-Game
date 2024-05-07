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
    Weapon& equippedWeapon;

public:
    // Constructor declaration
    Player(int health = 100, Weapon& equippedWeapon = hands);

    // Methods
    void addToInventory(const Weapon& weapon);

    // Getter methods
    const Inventory& getPlayerInventory() const;
    const Weapon& getEquippedWeapon() const;

    // Setter methods
    void setEquippedWeapon(const Weapon& weapon);

};

