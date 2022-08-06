/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:13 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 15:03:53 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact() : name("hh"), lastname("hh"), nickname("hh"), phoneNumber("hh"), darkSecret("hh") {
	
	std::cout << "Contact constructor\n";
	
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

std::string addData(std::string data) {
	
	std::string input;
	
	while (1) {
		
		std::cout << "Enter " << data << ": ";
		std::cin >> input;
		
		if (input.empty()) {

			continue ;
			
		} else {

			break ;
		}
	}
	
	return (input);
}

void Contact::addContact() {

	this->name = addData("name");
	this->lastname = addData("lastname");
	this->nickname = addData("nickname");
	this->phoneNumber = addData("phoneNumber");
	this->darkSecret = addData("darkSecret");
	std::cout << "Contact added.\n";
}

Contact::~Contact() {
	
	std::cout << "Contact distructor\n";

}