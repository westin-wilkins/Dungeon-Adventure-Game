#pragma once
#include "Inventory.h"
#include "Room.h"

class Unit
{
private:
	int health;
	std::string name;					//	Name of unit
	std::string description;			//	Description of unit
	std::string encounterDialogue;		//	Dialogue when first encountering an enemy
	Inventory unitInventory;			//	Inventory
	std::string equippedItem;			//	Weapon equipped by unit
	Room& currentRoom;					//	Need to figure out how to make it work with Room class

public:
	//	Constructor declariation
	Unit(int health, const std::string& name, const std::string& description,
		const std::string& encounterDialogue, Room& room)
		: health(health), name(name), description(description), 
		encounterDialogue(encounterDialogue), currentRoom(room)
	{

	}
};

