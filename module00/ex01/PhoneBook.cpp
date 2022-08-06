/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:43 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 17:50:38 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), count(0) {

}

void PhoneBook::getMain(void) {

	std::cout	<< "+-------------------------------------------------------+\n"
				<< "|                  AVAILABLE COMMANDS                   |\n"
				<< "+-------------------------------------------------------+\n"
				<< "|                                                       |\n"
				<< "|     ADD     -   Add a contact                         |\n"
				<< "|                                                       |\n"
				<< "|     SEARCH  -   Find a contact                        |\n"
				<< "|                                                       |\n"
				<< "|     EXIT    -   exit from PhoneBook                   |\n"
				<< "|                                                       |\n"
				<< "+-------------------------------------------------------+\n";
				
}

void PhoneBook::addContact() {
	
	if (this->index == 8) {
		
		this->index = 0;
		
	}

	this->contacts[this->index].addContact();
	if (this->contacts[this->index].isEmptyField()) {

		std::cout << "Empty field. Try again\n";
		this->contacts[this->index] = Contact();
		this->index--;
	}
	
	if (count < 8) {
		
		this->count++;
		
	}
	
	this->index++;
	
}

void PhoneBook::viewContact() {

	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";
	
	for (int i = 0; i < this->count; i++) {
		
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		
		if (this->contacts[i].getName().length() > 10) {
			std::cout << this->contacts[i].getName().substr(0, 9) << ".|";
		} else {
			std::cout << std::setw(10) << this->contacts[i].getName() << "|";
		}
		
		if (this->contacts[i].getLastname().length() > 10) {
			std::cout << this->contacts[i].getName().substr(0, 9) << ".|";
		} else {
			std::cout << std::setw(10) << this->contacts[i].getLastname() << "|";
		}
		
		if (this->contacts[i].getNickname().length() > 10) {
			std::cout << this->contacts[i].getNickname().substr(0, 9) << ".|";
		} else {
			std::cout << std::setw(10) << this->contacts[i].getNickname() << "|";
		}
		
		std::cout << "\n";
	}
	
	std::cout << "+--------------------------------------+\n";

}

void PhoneBook::searchContact() {

	if (this->count == 0) {

		std::cout << "Phone book is empty\n";
		return ;

	} else {

		viewContact();

	}
	
}

PhoneBook::~PhoneBook() {
	
}