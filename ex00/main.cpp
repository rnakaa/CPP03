#include <iostream>
#include "ClapTrap.hpp"

int main(){
	ClapTrap a("namunamu");
	ClapTrap b("pomupomu");

	std::cout << "\nnamunamu\nhp:10\nep:10\n\n";
	a.attack("pomupomu");
	b.takeDamage(20);
	b.attack("namunamu");
	b.beRepaired(10);
	b.attack("namunamu");
}
