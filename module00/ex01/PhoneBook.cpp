/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:43 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 16:33:58 by kferterb         ###   ########.fr       */
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
	Contact contact;
	contact.addContact();
	if (contact.isEmptyField()) {
		std::cout << "Empty field. Try again\n";
		return;
	}
	
	this->contacts[this->index] = contact; 
	
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

void	PhoneBook::viewFullInfo(Contact contact) {
	std::cout	<< "|" << "Firstname:	|" << std::setw(10) << contact.getName() << "|\n"
				<< "|" << "Lastname:	|" << std::setw(10) << contact.getLastname() << "|\n"
				<< "|" << "Nickname:	|" << std::setw(10) << contact.getNickname() << "|\n"
				<< "|" << "PhoneNumber:	|" << std::setw(10) << contact.getPhoneNumber() << "|\n"
				<< "|" << "DarkSecret:	|" << std::setw(10) << contact.getDarkSecret() << "|\n";
}

void	PhoneBook::numContact(void) {
	int	index;
	std::string input;

	std::cout << "Enter num contact: ";
	getline(std::cin, input);	
	index = atoi(input.c_str());	
	if (index <= 0 || index > this->count) {	
		std::cout << "Contact not found\n";
		return ;
	}	
	viewFullInfo(this->contacts[index - 1]);
}

void PhoneBook::searchContact() {
	if (this->count == 0) {
		std::cout << "Phone book is empty\n";
		return ;
	} else {
		viewContact();
		numContact();
	}
}

PhoneBook::~PhoneBook() {
	
}