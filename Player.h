#pragma once
#include <iostream>
#include <string>
#include "inventory.h"

class Player
{
private:
    int health;
    Inventory playerInventory;

public:
    explicit Player(int health)
        : health(health)
    {}

    void printInventory() const;

    void addItemToInventory(const std::string& item);

    void deleteItemFromInventory(size_t index);
};

