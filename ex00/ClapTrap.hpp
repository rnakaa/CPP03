#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>

class ClapTrap{
	private:
		std::string _name;
		int _hp;
		int _enp;
		int _dmg;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& cp);
		ClapTrap &operator=(const ClapTrap & cp);
		~ClapTrap();
		void attack(const std::string&target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
