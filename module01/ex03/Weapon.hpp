/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:39:41 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 17:02:30 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		
		void setType(std::string  type);
		std::string getType(void );
	private:
		std::string type;
};

#endif