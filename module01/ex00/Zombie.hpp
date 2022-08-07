/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:18:08 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 13:42:14 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
		
	private:
		std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif