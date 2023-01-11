#include <iostream>
#include "claptrap.h"
#include "scavtrap.h"
#include "fragtrap.h"

int main()
{
	FragTrap f1("awesome");
	ScavTrap s1("hey");

	std::cout << std::endl;
	s1.attack(f1.name());
	f1.takeDamage(s1.attackDamage());
	std::cout << std::endl;
	f1.attack(s1.name());
	s1.takeDamage(f1.attackDamage());
	std::cout << std::endl;
	f1.takeDamage(12);
	s1.takeDamage(5);
	std::cout << std::endl;
	f1.beRepaired(5);
	s1.beRepaired(5);
	std::cout << std::endl;
	s1.guardGate();
	f1.highFivesGuy();
	std::cout << std::endl;

	return 0;
}
