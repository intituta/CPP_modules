/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:13:12 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 17:33:49 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
	std::string string = "HI THIS IS BRAIN";
	std::string &stringREF = string;
	std::string *stringPTR = &string;
	std::cout	<< "string address: " << &string << "\n"
				<< "stringPTR address: " << stringPTR << "\n"
				<< "stringREF address: " << &stringREF << "\n"
				<< "value string: " << string << "\n"
				<< "value stringPTR: " << *stringPTR << "\n"
				<< "value stringREF: " << stringREF << "\n";
}