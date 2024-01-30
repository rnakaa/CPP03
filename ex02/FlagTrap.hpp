#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP
#include "ClapTrap.hpp"


class FlagTrap : public ClapTrap{
	public:
		FlagTrap(std::string name);
		FlagTrap(FlagTrap& cp);
		FlagTrap &operator=(FlagTrap & cp);
		~FlagTrap();
		void attack(std::string target);
		void highFivesGuys();
};
#endif
