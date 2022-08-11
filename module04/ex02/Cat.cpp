/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:35:31 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 18:35:32 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	cout << "Cat default constructor" << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat() {
	cout << "Cat destructor" << endl;
	delete this->brain;
}

Cat::Cat(const Cat &cat) {
	cout << "Cat copy constructor" << endl;
	this->type = cat.type;
	if (cat.brain) {
		this->brain = new Brain(*cat.brain);
	}
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		this->type = cat.type;
		if (cat.brain) {
			delete this->brain;
			this->brain = new Brain(*cat.brain);
		}
	}
	return *this;
}

void Cat::makeSound() const {
	cout << "meow!" << endl;
}

std::string Cat::getType() const {
	return this->type;
}

Brain Cat::getBrain() {
	return *this->brain;
}