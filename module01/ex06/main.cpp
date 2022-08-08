/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:45:15 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/08 10:50:15 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl harl;

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: bad arguments!\n";
		return (1);
	}

	std::string input(av[1]);

	if (input != "DEBUG" && input != "INFO" && input != "WARNING" && input != "ERROR") {
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		return (1);
	}

	harl.complain(av[1]);
}