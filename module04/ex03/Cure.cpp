/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:43 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 10:56:44 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &cure) {
	*this = cure;
}

Cure &Cure::operator=(const Cure &cure) {
	if (this != &cure) {
		this->type = cure.type;
	}
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	cout << "* heals " + target.getName() + "'s wounds *" << endl;
}