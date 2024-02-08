#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Frag Constractor\n";
	_hp = 100;
	_enp = 100;
	_dmg = 30;
}

void FragTrap::attack(std::string target){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	if (_enp <= 0){
		std::cout << "Energy points are empty" << std::endl;
		return ;
	}
	_enp--;
	std::cout << "FragTrap " << _name  << "attacks " << target << " causing"   << _dmg<< "points of damage!"  << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap & cp){
	if (this == &cp)
		return *this;
	_hp = cp._hp;
	_enp = cp._enp;
	_dmg = cp._dmg;
	return *this;
}

FragTrap::FragTrap(const FragTrap& cp){
	*this = cp;
}

FragTrap::~FragTrap(){
	std::cout << "Frag Destractor\n";
}

void FragTrap::highFivesGuys(){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	std::cout << _name << "ate FiveGuys!!!!"<< std::endl;
}
