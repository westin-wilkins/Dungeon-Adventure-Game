#include <iostream>
#include "Player.h"


//  Constructor
Player::Player(int health, Weapon& equippedItem) : Unit(health), equippedWeapon(equippedWeapon)
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

const Weapon& Player::getEquippedWeapon() const
{
    return equippedWeapon;
}

//  Setter methods
void Player::setEquippedWeapon(const Weapon& weapon)      //  Need to have it check if the item is in the inventory
{
    std::string equippedWeapon = weapon.getWeaponName();
    std::cout << "You equipped the " << equippedWeapon << std::endl;
}