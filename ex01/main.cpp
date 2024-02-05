#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ScavTrap c("temutemu");

	c.attack("pomupomu");
	c.takeDamage(100);
	c.takeDamage(20);
	c.beRepaired(10);
	c.takeDamage(20);
}
