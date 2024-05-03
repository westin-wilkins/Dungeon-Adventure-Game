#include <iostream>
#include "Player.h"

//  Constructor
Player::Player(int health)
    : Unit(health), playerInventory()
{}

//  Methods
void Player::printInventory() const
{
	playerInventory.printInventory();
}

void Player::addToInventory(const std::string& item)
{
	playerInventory.addItem(item);
}