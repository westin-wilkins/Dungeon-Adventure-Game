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

//  Getter methods


//  Setter methods
void Player::setEquippedItem(const Weapon& weapon)
{
    std::string equippedItem = weapon.getWeaponName();
    std::cout << "You equipped the " << equippedItem << std::endl;
}