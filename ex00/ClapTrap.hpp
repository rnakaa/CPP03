#include "ClapTrap.hpp"

class ClapTrap{
	private:
		std::string _name;
		int _hp = 10;
		int _enp = 10;
		int _dmg = 0;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string&target);
		void takeDamage(unsigned int amout);
		void beRepaired(unsigned int amout);
};
