#include "Unit.h"

Unit::Unit(int health, const std::string& name, const std::string& description,
    const std::string& encounterDialogue)
    : health(health), name(name), description(description),
    encounterDialogue(encounterDialogue)
{}

void Unit::printInventory() const
{
	unitInventory.printInventory();
}

void Unit::addToInventory(const std::string& item)
{
	unitInventory.addItem(item);
}