#pragma once
#include "Inventory.h"
#include "Room.h"
#include "Weapon.h"


class Unit
{
private:
	int health;
	std::string name;					
	std::string description;			//	Description of unit when examined by the player
	Inventory unitInventory;			
	Weapon& equippedItem;			
	//	Room							//	Need to figure out how to make it work with Room class

public:
	static Weapon hands;

	//	Constructor declaration
	Unit(int health, const std::string& name = "", const std::string& description = "",	//	Need to add rooms
		 Weapon& equippedItem = hands);

	//	Getter methods
	int getHealth() const;
	std::string getName() const;
	std::string getDescription() const;
	const Inventory& getInventory() const;
	const Weapon& getEquippedItem() const;

	//	Setter methods
	void setHealth(int newHealth);

	
};

