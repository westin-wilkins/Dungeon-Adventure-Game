#include <iostream>
#include "player.h"
#include "Inventory.h"


int main()
{
    Inventory inventory;
    Player player(10);

    player.addItemToInventory("Short Sword");
    player.addItemToInventory("Short Sword");
    player.addItemToInventory("Axe");
    player.addItemToInventory("Potion");
    player.addItemToInventory("Potion");
    player.addItemToInventory("Potion");
    player.addItemToInventory("Potion");
    player.addItemToInventory("Potion");
    player.addItemToInventory("Potion");
    player.printInventory();
    player.deleteItemFromInventory("Short Sword");
    player.deleteItemFromInventory("Axe");
    player.deleteItemFromInventory("Dagger");
    player.printInventory();

    return 0;
}