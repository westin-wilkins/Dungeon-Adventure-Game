#include <iostream>
#include "Player.h"

//  Constructor
Player::Player(int health)
    : Unit(health), playerInventory()
{}

//  Methods
void Player::addToInventory(const std::string& item)    //  Need to change this to take weapon class objects
{
	playerInventory.addItem(item);
}

//  Getter methods


//  Setter methods
void Player::setEquippedItem(const Weapon& weapon)  //  Need to have it check if the item is in the inventory
{
    std::string equippedItem = weapon.getWeaponName();
    std::cout << "You equipped the " << equippedItem << std::endl;
}