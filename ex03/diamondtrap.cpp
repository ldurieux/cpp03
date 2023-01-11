#include "diamondtrap.h"

DiamondTrap::DiamondTrap() : ScavTrap(),
	FragTrap(),
	_name("")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	ClapTrap::_name = "_clap_name";
	std::cout << "Default DiamondTrap created" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(),
	FragTrap(),
	_name(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap " << _name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name: " << _name << " clap_name: " << ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	ClapTrap::operator=(other);
	_name = other._name;
	return *this;
}
