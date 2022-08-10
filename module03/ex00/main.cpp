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

#include "ClapTrap.hpp"

int main(void) {
    
    ClapTrap player1("player1");
    ClapTrap player2("player2");

    player1.attack("player2");
    player2.takeDamage(1);

    player2.attack("player1");
    player1.takeDamage(1);

    player1.beRepaired(1);
    player2.beRepaired(1);

    return 0;
}
