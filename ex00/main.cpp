#include <iostream>
#include "claptrap.h"

int main()
{
	ClapTrap c1;
	ClapTrap c2("awesome");

	std::cout << std::endl;
	c1.attack(c2.name());
	c2.takeDamage(c2.attackDamage());
	std::cout << std::endl;
	c2.attack(c1.name());
	c1.takeDamage(c1.attackDamage());
	std::cout << std::endl;
	c1.takeDamage(12);
	c2.takeDamage(5);
	std::cout << std::endl;
	c1.beRepaired(5);
	c2.beRepaired(5);
	std::cout << std::endl;

	return 0;
}
