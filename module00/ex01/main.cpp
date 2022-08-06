/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:27:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 17:54:19 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void) {
	
	std::string input;
	PhoneBook 	PhoneBook;
	
	PhoneBook.getMain();

	while (1) {
		
		std::cout << "Enter command : ";
		
		if (!std::getline(std::cin, input)) {

			std::cout << "Bye\n";
			return (0);

		}
		else if (input == "EXIT") {
			
			std::cout << "Bye\n";
			return (0);
			
		}
		else if (input == "ADD") {
			
			PhoneBook.addContact();
			
		}
		else if (input == "SEARCH") {
			
			PhoneBook.searchContact();
			
		}
		else {
			
			std::cout << "Command not found\n";
			
		}
	}
	
	return (0);
}