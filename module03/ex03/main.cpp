/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:04:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:34:22 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap one;

	std::cout << std::endl;

	DiamondTrap two("Diamond");

	std::cout << std::endl;

	one.attack("SomeTrap");
	two.attack("AnotherTrap");

	std::cout << std::endl;

	one.highFivesGuys();
	two.guardGate();

	std::cout << std::endl;

	one.whoAmI();
	two.whoAmI();

	std::cout << std::endl;

	return 0;
}