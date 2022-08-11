/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:09:53 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 13:59:16 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	if (this != &wrongCat) {
		this->type = wrongCat.type;
	}
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "meow!" << std::endl;
}

std::string WrongCat::getType() const {
	return this->type;
}