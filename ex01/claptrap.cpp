#include "claptrap.h"

ClapTrap::ClapTrap() :
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return;
	std::cout << "ClapTrap " << _name
			  << " attacks "<< target
			  << ", causing " << _attackDamage
			  << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name
			  << " took "<< amount << " points of damage!"
			  << ", " << _hitPoints
			  << "hp left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0 || _hitPoints <= 0)
		return;
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name
			  << " was repaired by "<< amount
			  << ", " << _hitPoints << "hp left"
			  << "!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

const std::string& ClapTrap::name() const
{
	return _name;
}

int ClapTrap::attackDamage() const
{
	return _attackDamage;
}
