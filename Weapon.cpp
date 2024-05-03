#include "Weapon.h"

//	Constructor
Weapon::Weapon(std::string const& weaponName, std::string const& weaponDescription,
	int const& weaponDamage)
	: weaponName(weaponName), weaponDescription(weaponDescription), weaponDamage(weaponDamage)
{}

//	Getter methods
std::string Weapon::getWeaponName() const
{
	return weaponName;
}

std::string Weapon::getWeaponDescription() const
{
	return weaponDescription;
}

int Weapon::getWeaponDamage() const
{
	return weaponDamage;
}