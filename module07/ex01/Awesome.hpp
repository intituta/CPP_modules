/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:02:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 11:13:07 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP
#include <iostream>

class Awesome {

public:
	Awesome(void);
	int get(void) const;

private:
	int _n;
};

std::ostream &operator << (std::ostream &os, const Awesome &a);

template <typename T>
void print(T const &x) {
	std::cout << x << std::endl;
}

#endif