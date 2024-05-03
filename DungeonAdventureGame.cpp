#include <iostream>
#include "player.h"
#include "Inventory.h"
#include "Unit.h"


int main()
{
    Inventory inventory;
    Player player(100);

    player.addToInventory("Short Sword");
    player.printInventory();

    return 0;
}