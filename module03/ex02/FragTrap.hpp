/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:20:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:22:58 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	FragTrap& operator = (const FragTrap &fragTrap);

	void highFivesGuys(void);
};

#endif

