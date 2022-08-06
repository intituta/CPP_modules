/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:43 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 14:06:07 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {

	std::cout << "PhoneBook constructor\n";

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
	
	if (this->count == 8) {
		
		this->count = 0;
		
	}

	this->contacts[this->count].addContact();
	
	this->count++;
	
}

PhoneBook::~PhoneBook() {

	std::cout << "PhoneBook distructor\n";
	
}