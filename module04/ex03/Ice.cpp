/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:38 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 12:44:32 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice) {
	*this = ice;
}

Ice &Ice::operator=(const Ice &ice) {
	if (this != &ice) {
		this->type = ice.type;
	}
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	cout << "* shoots an ice bolt at " + target.getName() + " *" << endl;
}