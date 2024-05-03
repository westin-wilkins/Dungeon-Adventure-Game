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


};

