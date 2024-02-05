#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& cp);
		ScavTrap &operator=(const ScavTrap & cp);
		~ScavTrap();
		void attack(std::string target);
		void guardGate();
};
#endif
