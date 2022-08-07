/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:45:04 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 16:35:22 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int N = 5;

	Zombie *zombie = zombieHorde(N, "Zombie");

	for (int i = 0; i < N; ++i) {
		zombie[i].announce();
	}

	delete [] zombie;
}