#include "Room.h"

//Constructor
Room::Room(std::string const& description,
    std::map<std::string, bool> exits,
    std::vector<std::string> itemsInRoom,
    std::vector<std::string> enemiesInRoom)
    : description(description),
    exits(std::move(exits)),
    itemsInRoom(std::move(itemsInRoom)),
    enemiesInRoom(std::move(enemiesInRoom))
{}

//  Getter methods
std::string Room::getDescription() const
{
    return description;
}

std::map<std::string, bool> Room::getExits() const
{
    return exits;
}

std::vector<std::string> Room::getItemsInRoom() const
{
    return itemsInRoom;
}

std::vector<std::string> Room::getEnemiesInRoom() const
{
    return enemiesInRoom;
}

//  Setter methods
void Room::setItemsInRoom(std::vector<std::string>& newItems)
{

}

void setExits(const std::map<std::string, bool>& newExits)
{

}