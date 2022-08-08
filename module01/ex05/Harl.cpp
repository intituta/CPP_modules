/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:45:30 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/08 10:19:16 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::cout;

void Harl::complain(std::string level) {
	void (Harl::*debug_p) (void) = &Harl::debug;
	void (Harl::*info_p) (void) = &Harl::info;
	void (Harl::*warning_p) (void) = &Harl::warning;
	void (Harl::*error_p) (void) = &Harl::error;

	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = -1;
	int len;

	len = arr->length();

	for (int i = 0; i < len; ++i) {
		if (arr[i] == level) {
			index = i;
			break;
		}
	}

	switch (index) {
		case 0:
			(this->*debug_p)();
			break;
		case 1:
			(this->*info_p)();
			break;
		case 2:
			(this->*warning_p)();
			break;
		case 3:
			(this->*error_p)();
			break;
		default:
			std::cerr << "Error: unknown level!\n";
	}
}

void Harl::debug() {
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
			"ketchup burger. I really do!\n";
}

void Harl::info() {
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
			"enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning() {
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
			"years whereas you started working here since last month.\n";
}

void Harl::error() {
	cout << "This is unacceptable! I want to speak to the manager now.\n";
}