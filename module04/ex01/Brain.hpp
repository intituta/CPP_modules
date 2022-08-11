/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:48:20 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/11 15:48:22 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::cout;
using std::endl;

class Brain {

public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator = (const Brain &brain);

private:
	std::string ideas[100];
};

#endif
