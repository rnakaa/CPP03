#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ScavTrap c("temutemu");

	c.attack("pomupomu");
	c.takeDamage(20);
	c.beRepaired(10);
	c.beRepaired(9);
}
