/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 15:45:28 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 16:46:24 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie();
		~Zombie(void);

		void setName(std::string name);
		void announce(void);
		
	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif