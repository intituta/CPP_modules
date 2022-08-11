/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:43:54 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 14:04:36 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal) {
		this->type = animal.type;
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "I'm an Animal" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}