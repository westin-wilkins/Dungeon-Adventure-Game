#include <iostream>
#include "Player.h"


//  Constructor
Player::Player(int health, Weapon& equippedItem) : Unit(health), equippedItem(equippedItem)
{}

//  Methods
void Player::addToInventory(const Weapon& weapon)       //  Need to change this to take weapon class objects
{
	playerInventory.addItem(weapon);
}

//  Getter methods
const Inventory& Player::getPlayerInventory() const
{
    return playerInventory;
}

const Weapon& Player::getEquippedItem() const
{
    return equippedItem;
}

//  Setter methods
void Player::setEquippedItem(const Weapon& weapon)      //  Need to have it check if the item is in the inventory
{
    std::string equippedItem = weapon.getWeaponName();
    std::cout << "You equipped the " << equippedItem << std::endl;
}