/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 10:56:20 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/12 10:56:21 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator = (const MateriaSource &materiaSource);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const & type);

private:
	AMateria *store[4];
};

#endif
