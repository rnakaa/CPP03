#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	FragTrap c("temutemu");

	c.attack("pomupomu");
	c.takeDamage(100);
	c.takeDamage(100);
	c.beRepaired(10);
	c.takeDamage(100);
	c.beRepaired(100);
	c.highFivesGuys();
}
