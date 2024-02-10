#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Scav Constractor\n";
	_hp = 100;
	_enp = 50;
	_dmg = 20;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Scav Constractor\n";
	_hp = 100;
	_enp = 50;
	_dmg = 20;
}

void ScavTrap::attack(std::string target){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	if (_enp <= 0){
		std::cout << "Energy points are empty" << std::endl;
		return ;
	}
	_enp--;
	if (_enp < 0)
		_enp = 0;
	std::cout << "ScavTrap " << _name  << " attacks " << target << ", causing"   << _dmg<< "points of damage!"  << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & cp){
	if (this == &cp)
		return *this;
	_hp = cp._hp;
	_enp = cp._enp;
	_dmg = cp._dmg;
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap& cp){
	*this = cp;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scav Destractor\n";
}

void ScavTrap::guardGate(){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	std::cout << _name << " is now gatekeeper!!!!"<< std::endl;
}
