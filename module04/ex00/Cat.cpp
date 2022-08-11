/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:44:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 14:06:23 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor" << std::endl;
	this->type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &cat) {
	std::cout << "Cat copy constructor" << std::endl;
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meow!" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}