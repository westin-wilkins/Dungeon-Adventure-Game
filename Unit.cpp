#include "Unit.h"



//  Constructor
Weapon Unit::hands("Hands", "No waepon equipped", 0);

Unit::Unit(int health, const std::string& name, const std::string& description,
    Weapon& equippedItem) : health(health), name(name), description(description), 
    equippedWeapon(equippedWeapon)
{}


//  Getter methods
int Unit::getHealth() const
{
    return health;
}

std::string Unit::getName() const
{
    return name;
}

std::string Unit::getDescription() const
{
    return description;
}

const Inventory& Unit::getInventory() const
{
    return unitInventory;
}

const Weapon& Unit::getEquippedWeapon() const
{
    return equippedWeapon;
}

//  Setter methods
void Unit::setHealth(int newHealth)
{
    health = newHealth;
}

