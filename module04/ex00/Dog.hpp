/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:44:45 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 14:05:46 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	~Dog();
	Dog(const Dog &dog);
	Dog &operator = (const Dog &dog);

	void makeSound() const;
	std::string getType() const;
};

#endif