/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:04:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:22:52 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    
	FragTrap one;
	FragTrap two("Frag");

	one.attack("Frag");
	two.takeDamage(1);

	two.beRepaired(1);

	one.highFivesGuys();
	two.highFivesGuys();
}