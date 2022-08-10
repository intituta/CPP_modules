#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& diamondTrap);
	DiamondTrap& operator = (const DiamondTrap& diamondTrap);

	void whoAmI();
	void attack(const std::string &target);

private:

	std::string name;
};

#endif
