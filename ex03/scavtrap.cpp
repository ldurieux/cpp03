#include "scavtrap.h"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Default ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return;
	std::cout << "ScavTrap " << _name
			  << " attacks " << target
			  << ", causing " << _attackDamage
			  << " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in guard mode." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	return *this;
}
