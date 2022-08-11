/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:35:56 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 18:35:57 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	cout << "WrongAnimal default constructor" << endl;
}

WrongAnimal::~WrongAnimal() {
	cout << "WrongAnimal destructor" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	cout << "WrongAnimal copy constructor" << endl;
	*this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this != &wrongAnimal) {
		this->type = wrongAnimal.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	cout << "I'm WrongAnimal" << endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}