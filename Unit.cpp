#include "Unit.h"

//  Constructor
Unit::Unit(int health, const std::string& name, const std::string& description,
    const std::string& encounterDialogue)
    : health(health), name(name), description(description),
    encounterDialogue(encounterDialogue)
{}

//  Methods




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

std::string Unit::getencounterDialouge() const
{
    return encounterDialogue;
}

std::string Unit::getEquippedItem() const
{
    return equippedItem;
}

//  Setter methods
void Unit::setHealth(int newHealth)
{
    health = newHealth;
}

