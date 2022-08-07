/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:17:44 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 14:21:45 by kferterb         ###   ########.fr       */
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