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

void Player::deleteItemFromInventory(size_t index)  //Change so that item is dropped 
                                                    //(added to room contents instead of deleted)
{
    playerInventory.deleteItem(index);
}