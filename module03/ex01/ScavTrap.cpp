/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:20:14 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:51:41 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    
    this->name = "defaultGate";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    
     this->hitPoints = 100;
     this->energyPoints = 50;
     this->attackDamage = 20;
     std::cout << "ScavTrap name parametr constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) {

    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scavTrap;
}

ScavTrap::~ScavTrap() {
    
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap) {

    if (this != &scavTrap) {
    
        this->name = scavTrap.name;
        this->hitPoints = scavTrap.hitPoints;
        this->energyPoints = scavTrap.energyPoints;
        this->attackDamage = scavTrap.attackDamage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    
    if (this->hitPoints < 1 || this->energyPoints < 1) {
        
        std::cout << "ScavTrap " << this->name << " ti is impossible to attack" << std::endl;
        return;
    } else {

        std::cout << "ScavTrap " << this->name << " attack "
            << target << ", causing 1 points of damage" << std::endl;
    }
}

void ScavTrap::guardGate() {

    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
