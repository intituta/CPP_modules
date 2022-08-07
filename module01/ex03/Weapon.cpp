/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:39:32 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 18:05:58 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    setType(type);
    getType();
}

Weapon::~Weapon() {
	
}

void Weapon::setType(std::string  type) {
    this->type = type;
}

std::string Weapon::getType(void ) {
    return this->type;
}