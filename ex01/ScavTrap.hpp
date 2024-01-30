#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& cp);
		ScavTrap &operator=(ScavTrap & cp);
		~ScavTrap();
		void attack(std::string target);
		void guardGate();
};
#endif
