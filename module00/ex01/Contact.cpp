/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:13 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 17:12:25 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() {
	
}

std::string Contact::getName() {
	
	return (this->name);
	
}
std::string Contact::getLastname() {

	return (this->lastname);
	
}
std::string Contact::getNickname() {

	return (this->nickname);

}
std::string Contact::getPhoneNumber() {

	return (this->phoneNumber);

}
std::string Contact::getDarkSecret() {

	return (this->darkSecret);

}

void Contact::setName(std::string data) {

	this->name = data;
	
}
void Contact::setLastname(std::string data) {

	this->lastname = data;
	
}
void Contact::setNickname(std::string data) {

	this->nickname = data;

}
void Contact::setPhoneNumber(std::string data) {

	this->phoneNumber = data;

}
void Contact::setDarkSecret(std::string data) {

	this->darkSecret = data;

}

void Contact::addContact() {

	std::string data;
	
	std::cout << "Enter name: ";
	std::cin >> data;
	this->setName(data);

	std::cout << "Enter lastname: ";
	std::cin >> data;
	this->setLastname(data);

	std::cout << "Enter nickname: ";
	std::cin >> data;
	this->setNickname(data);

	std::cout << "Enter phoneNumber: ";
	std::cin >> data;
	this->setPhoneNumber(data);

	std::cout << "Enter darkSecret: ";
	std::cin >> data;
	this->setDarkSecret(data);
		
}

bool Contact::isEmptyField() {
	
	if (this->getName().empty()) {

		return (true);

	}
	if (this->getLastname().empty()) {

		return (true);

	}
	if (this->getNickname().empty()) {

		return (true);

	}
	if (this->getPhoneNumber().empty()) {

		return (true);

	}
	if (this->getDarkSecret().empty()) {

		return (true);

	}
	return (false);
}

Contact::~Contact() {

}