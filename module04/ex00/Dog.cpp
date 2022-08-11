/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:44:40 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 14:06:06 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &dog) {
	std::cout << "Dog copy constructor" << std::endl;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		this->type = dog.type;
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "wof-wof!" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}