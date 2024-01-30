#include <iostream>
#include "ClapTrap.hpp"

int main(){
	ClapTrap a("namunamu");
	ClapTrap b("pomupomu");

	a.attack("pomupomu");
	b.takeDamage(20);
	b.beRepaired(10);
	b.beRepaired(9);
}
