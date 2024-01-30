#include "ClapTrap.hpp"

ClapTrap(std::string name){
	std::cout << "Constractor\n";
	_name = name;
}

~ClapTrap(){
}

void ClapTrap::attack(const std::string&target){
	std::cout << "ClapTrap " <<   << "attacks " << target << "causing "   << " 10 points of damage!"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amout){
	std::cout << _name << " takes " << amount << "of dameges\n";
	_hp -= amount;
}
void ClapTrap::beRepaired(unsigned int amout){
	
}
