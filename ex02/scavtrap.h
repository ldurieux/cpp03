#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "claptrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();

	ScavTrap& operator=(const ScavTrap &other);
};

#endif // SCAVTRAP_H
