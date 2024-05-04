#include <iostream>
#include "player.h"
#include "Inventory.h"
#include "Unit.h"
#include "Weapon.h"


int main()
{
    Player player(100);

    //  Weapon objects
    Weapon shortsword("Short Sword", "An iron short sword", 10);

    player.setEquippedItem(shortsword);

    player.printInventory();

    return 0;
}