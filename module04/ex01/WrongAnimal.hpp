/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:48:55 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 15:48:57 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

using std::cout;
using std::endl;

class WrongAnimal {

public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal &operator = (const WrongAnimal &wrongAnimal);

	void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif
