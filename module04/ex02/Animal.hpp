/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:34:57 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 18:35:01 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;

class Animal {

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator = (const Animal &animal);

	virtual void makeSound() const = 0;
	std::string getType() const;

protected:
	std::string type;
};

#endif
