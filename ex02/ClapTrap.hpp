#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
	protected:
		std::string _name;
		int _hp;
		int _enp;
		int _dmg;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& cp);
		ClapTrap &operator=(ClapTrap & cp);
		~ClapTrap();
		void attack(const std::string&target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
