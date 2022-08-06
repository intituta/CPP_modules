/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:27:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 12:23:33 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main(void) {
	
	std::string input;
	PhoneBook 	PhoneBook;
	
	PhoneBook.getMain();

	while (1) {
		
		std::cin >> input;
		
		if (input == "EXIT") {
			
			std::cout << "bye\n";
			return (0);
			
		}
		else if (input == "ADD") {
			
			PhoneBook.addContact();
			
		}
		else if (input == "SEARCH") {
			
			std::cout << "cmd SEARCH\n";
			
		}
		else {
			
			std::cout << "command not found\n";

		}
	}
	
	return (0);
}