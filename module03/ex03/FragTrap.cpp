/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:20:14 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:49:41 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

    this->name = "defaultGate";
    this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->fragHitPoints = 100;
    this->fragAttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;  
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    
    this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->fragHitPoints = 100;
	this->fragAttackDamage = 30;
     std::cout << "FragTrap name parametr constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap) {

    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = FragTrap;
}

FragTrap::~FragTrap() {
    
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrap) {

    if (this != &FragTrap) {
    
        this->name = FragTrap.name;
        this->hitPoints = FragTrap.hitPoints;
        this->energyPoints = FragTrap.energyPoints;
        this->attackDamage = FragTrap.attackDamage;
    }
    return *this;
}

void FragTrap::highFivesGuys() {
    
	std::cout << this->name << " give me a five!" << std::endl;
}
