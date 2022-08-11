/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:44:04 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 14:04:19 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal {

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator = (const Animal &animal);

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif