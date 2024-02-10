#include <iostream>
#include "ClapTrap.hpp"

int main(){
	ClapTrap a("namunamu");
	ClapTrap b("pomupomu");

	std::cout << "\nnamunamu\nhp:10\nep:10\n\n";
	a.attack("pomupomu");
	b.attack("namunamu");
	b.beRepaired(5);
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.attack("namunamu");
	b.takeDamage(UINT_MAX);
	b.attack("namunamu");
}
