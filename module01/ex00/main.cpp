/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:17:44 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 13:51:47 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie zombie("One");
	zombie.announce();

	Zombie *dynamicZombie = newZombie("Two");
	dynamicZombie->announce();

	randomChump("Three");

	delete dynamicZombie;
}