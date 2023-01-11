#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "scavtrap.h"
#include "fragtrap.h"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	~DiamondTrap();

	void attack(const std::string& target);
	void whoAmI();

	DiamondTrap &operator=(const DiamondTrap &other);

private:
	std::string _name;
};

#endif // DIAMONDTRAP_H
