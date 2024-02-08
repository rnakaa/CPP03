#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constractor\n";
	_hp = 10;
	_enp = 10;
	_dmg = 0;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& cp){
	*this = cp;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & cp){
	if (this == &cp)
		return *this;
	_hp = cp._hp;
	_enp = cp._enp;
	_dmg = cp._dmg;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destractor\n";
}

void ClapTrap::attack(const std::string&target){
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
	std::cout << "ClapTrap " << _name  << " attacks " << target << ", causing "   << _dmg<< " points of damage!"  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	std::cout << _name << " takes " << amount << " of dameges" << std::endl;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hp <= 0){
		std::cout << "Hit points are empty" << std::endl;
		return ;
	}
	if (_enp <= 0){
		std::cout << "Energy points are empty" << std::endl;
		return ;
	}
	std::cout << _name << " repaired " << amount << " of hp" << std::endl;
	_hp += amount;
	_enp--;
	if (_enp < 0)
		_enp = 0;
}
