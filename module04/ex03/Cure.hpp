/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:40 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 10:56:41 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

public:
	Cure();
	~Cure();
	Cure(const Cure &cure);
	Cure &operator = (const Cure &cure);

	AMateria *clone() const;
	void use(ICharacter& target);
};

#endif
