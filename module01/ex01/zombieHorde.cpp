/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:46:15 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 16:34:53 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	if (N > 0) {
		Zombie *zombie = new Zombie[N];
		for (int i = 0; i < N; ++i) {
			zombie[i].setName(name);
		}
		return zombie;
	}
	return NULL;
}