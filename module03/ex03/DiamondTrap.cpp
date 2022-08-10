#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "default";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::getFragHitPoints();
	this->energyPoints = ScavTrap::getScavEnergyPoints();
	this->attackDamage = FragTrap::getFragAttackDamage();
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
}


int FragTrap::getFragHitPoints() {

	return this->fragHitPoints;
}

int FragTrap::getFragAttackDamage() {

	return this->fragAttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {

	std::cout << "DiamondTrap name parameter constructor called" << std::endl;
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::getFragHitPoints();
	this->energyPoints = ScavTrap::getScavEnergyPoints();
	this->attackDamage = FragTrap::getFragAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap) {

	if (this != &diamondTrap) {
		this->name = diamondTrap.name;
		this->hitPoints = diamondTrap.hitPoints;
		this->energyPoints = diamondTrap.energyPoints;
		this->attackDamage = diamondTrap.attackDamage;
	}
	return *this;
}

void DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {

	std::cout	<< "DiamondTrap name: " << this->name << std::endl
				<< "DiamondTrap hitPoints: " << this->hitPoints << std::endl
				<< "DiamondTrap energyPoints: " << this->energyPoints << std::endl
				<< "DiamondTrap attackDamage: " << this->attackDamage << std::endl
				<< "ClapTrap name: " << ClapTrap::name << std::endl;
}
