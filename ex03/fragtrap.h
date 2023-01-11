#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "claptrap.h"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string& name);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuy();

	FragTrap& operator=(const FragTrap &other);
};

#endif // FRAGTRAP_H
