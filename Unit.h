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
	//Room								//	Need to figure out how to make it work with Room class

public:
	//	Constructor declaration
	Unit(int health, const std::string& name = "", const std::string& description = "",	//	Need to add rooms
		const std::string& encounterDialogue = "");

	void printInventory() const;

	void addToInventory(const std::string& item);

};

