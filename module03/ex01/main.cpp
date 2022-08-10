/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:04:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 19:05:11 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    
    ScavTrap one;
    ScavTrap two("twoGate");
    ScavTrap three = two;

    three.beRepaired(100);

    one.attack("twoGate");
    two.takeDamage(30);

    two.attack("defaultGate");

    two.guardGate();

    return 0;
}
