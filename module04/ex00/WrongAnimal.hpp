/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:09:19 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 13:59:42 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

protected:
	std::string type;
	
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &wrongAnimal);
	virtual ~WrongAnimal();

	WrongAnimal &operator = (const WrongAnimal &wrongAnimal);

	std::string getType() const;

	void makeSound() const;
};

#endif
