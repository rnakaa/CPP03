#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(){
	FlagTrap c("temutemu");

	c.attack("pomupomu");
	c.takeDamage(20);
	c.beRepaired(10);
	c.beRepaired(9);
	c.highFivesGuys();
}
