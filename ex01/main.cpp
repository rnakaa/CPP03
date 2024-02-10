#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ClapTrap alis("alis");
	ScavTrap bob("bob");
	ScavTrap chary("chary");

	bob.guardGate();
	std::cout << "-------------------------------------" << std::endl;
	alis.attack("chary");
	bob.takeDamage(0);
	std::cout << "-------------------------------------" << std::endl;
	chary.attack("bob");
	bob.takeDamage(20);
	std::cout << "-------------------------------------" << std::endl;
	for (int i = 0;i < 50; i++){
		bob.beRepaired(0);
	}
	std::cout << "-------------------------------------" << std::endl;
	chary.attack("bob");
	bob.takeDamage(100);
	bob.beRepaired(10);
}
