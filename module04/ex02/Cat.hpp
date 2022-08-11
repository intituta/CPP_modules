/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:35:33 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 18:35:36 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat &operator = (const Cat &cat);

	void makeSound() const;
	std::string getType() const;
	Brain getBrain();

private:
	Brain *brain;
};

#endif
