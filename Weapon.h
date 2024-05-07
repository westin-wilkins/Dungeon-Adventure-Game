#pragma once
#include <iostream>

class Weapon
{
private:
	std::string weaponName;				//	Name of weapon
	std::string weaponDescription;		//	Description of weapon
	int weaponDamage;					//	Damage of weapon

public:
	//	Constructor Declaration
	Weapon(std::string const& weaponName = "",
		std::string const& weaponDescription = "",
		int const& weaponDamage = 0);

	//	Getter methods
	std::string getWeaponName() const;
	std::string getWeaponDescription() const;
	int getWeaponDamage() const;
};


