/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:04:31 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 16:15:02 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {

    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    
    std::cout << "ClapTrap name parametr constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {

    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap::~ClapTrap(void) {

    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap) {

    if (this != &clapTrap) {
        
        this->name = clapTrap.name;
        this->hitPoints = clapTrap.hitPoints;
        this->energyPoints = clapTrap.energyPoints;
        this->attackDamage = clapTrap.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    
    if (this->hitPoints < 1 or this->energyPoints < 1) {

        std::cout << this->name << " it is impossible to attack" << std::endl;
        return;
    } else {
        
        std::cout << "ClapTrap " << this->name << " attack "
            << target << " , causing 1 points of damage" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " taken of "
        << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->hitPoints < 1 or this->energyPoints < 1) {
    
        std::cout << this->name << " it is imposible to repair" << std::endl;
        return;
    } else {

        this->hitPoints += amount;
        std::cout << this->name << " repaired " << amount << " hit points" << std::endl;
    }
}

