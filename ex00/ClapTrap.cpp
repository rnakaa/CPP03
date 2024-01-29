#include "ClapTrap.hpp"

ClapTrap(std::string name){
	std::cout << "Constractor\n";
	_name = name;
}

~ClapTrap(){
}

void ClapTrap::attack(const std::string&target){
	std::cout << "ClapTrap " <<   << "attacks "<target>, causing <damage> points of damage! 
}
void ClapTrap::takeDamage(unsigned int amout);
void ClapTrap::beRepaired(unsigned int amout);
