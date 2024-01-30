#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name){
	std::cout << "Flag Constractor\n";
	_hp = 100;
	_enp = 100;
	_dmg = 30;
}

void FlagTrap::attack(std::string target){
	if (_hp <= 0){
		std::cout << "Hit points is empty" << std::endl;
		return ;
	}
	std::cout << "FlagTrap " << _name  << "attacks " << target << " causing"   << _dmg<< "points of damage!"  << std::endl;
}

FlagTrap &FlagTrap::operator=(FlagTrap & cp){
	if (this == &cp)
		return *this;
	_hp = cp._hp;
	_enp = cp._enp;
	_dmg = cp._dmg;
	return *this;
}

FlagTrap::FlagTrap(FlagTrap& cp){
	*this = cp;
}

FlagTrap::~FlagTrap(){
	std::cout << "Flag Destractor\n";
}

void FlagTrap::highFivesGuys(){
	if (_hp <= 0){
		std::cout << "Hit points is empty" << std::endl;
		return ;
	}
	std::cout << _name << "ate FiveGuys!!!!"<< std::endl;
}
