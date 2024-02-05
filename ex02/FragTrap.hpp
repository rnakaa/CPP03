#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap& cp);
		FragTrap &operator=(const FragTrap & cp);
		~FragTrap();
		void attack(std::string target);
		void highFivesGuys();
};
#endif
