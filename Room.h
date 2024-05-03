#pragma once
#include <iostream>
#include <map>
#include <vector>

class Room
{
private:
	std::string description;					//	Description of room
	std::map<std::string, bool> exits;			//	Possible movement directions of room
	std::vector<std::string>  itemsInRoom;		//	Interactible items in room
	std::vector<std::string> enemiesInRoom;		//	Enemies in room 

public:
	//	Constructor declaration
	Room(std::string const& description = "",
		std::map<std::string, bool> exits = {
			{"north", false},
			{"east", false},
			{"south", false},
			{"west", false}
		},
		std::vector<std::string> itemsInRoom = {}, 
		std::vector<std::string> enemiesInRoom = {});

	//	Getter methods
	std::string getDescription() const;

	std::map<std::string, bool> getExits() const;


	std::vector<std::string>  getItemsInRoom() const;


	std::vector<std::string> getEnemiesInRoom() const;

	//	Setter Methods
	void setItemsInRoom(std::vector<std::string>& newItems);	//	Setter items dropped into rooms

};	void setExits(const std::map<std::string, bool>& newExits);	//	Setter for temporary false values like 
																//	locked doors that need keys to open

