/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:45:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 16:46:17 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	
}

Zombie::~Zombie(void) {
	std::cout << this->name << " zombie delete\n";
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}