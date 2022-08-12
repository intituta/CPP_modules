/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:35 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 10:56:36 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	~Ice();
	Ice(const Ice &ice);
	Ice &operator = (const Ice &ice);

	AMateria *clone() const;
	void use(ICharacter& target);
};

#endif
