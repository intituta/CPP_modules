/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:53 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 10:56:54 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &aMateria) {
	*this = aMateria;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	if (this != &aMateria) {
		this->type = aMateria.type;
	}
	return *this;
}

AMateria::AMateria(const std::string &type) : type(type) {}

const std::string &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}