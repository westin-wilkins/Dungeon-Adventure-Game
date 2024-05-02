#include <iostream>
#include "Player.h"

void Player::printInventory() const
{
    playerInventory.printInventory();
}

void Player::addItemToInventory(const std::string& item)
{
    playerInventory.addItem(item);
}

void Player::deleteItemFromInventory(size_t index)
{
    playerInventory.deleteItem(index);
}