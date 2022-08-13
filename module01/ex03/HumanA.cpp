/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:37:57 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 17:02:38 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon) {
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA(){}

void HumanA::attack(void ) {
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
