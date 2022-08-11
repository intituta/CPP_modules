/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:34:37 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 18:34:38 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	cout << "Animal default constructor" << endl;
}

Animal::~Animal() {
	cout << "Animal destructor" << endl;
}

Animal::Animal(const Animal &animal) {
	cout << "Animal copy constructor" << endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		this->type = animal.type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}