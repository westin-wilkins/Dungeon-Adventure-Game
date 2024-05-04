#include <iostream>
#include "Player.h"
#include "Inventory.h"
#include "Unit.h"
#include "Weapon.h"


class UserInterface
{
public:
	void run()
	{
		while (true)
		{
			displayMenu();
			char choice;
			std::cin >> choice;

			switch (choice)
			{
			case '1':
				player.printInventory();
			}
		}
	}

	void displayMenu()
	{
		std::cout << "===== Menu =====" << std::endl;
		std::cout << "1. Print inventory" << std::endl;
		std::cout << "2. Other menu option" << std::endl;
		std::cout << "Q. Quit" << std::endl;
		std::cout << "================" << std::endl;
		std::cout << "Enter your choice: ";
	}
};