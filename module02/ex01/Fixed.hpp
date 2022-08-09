/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:15:52 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 11:11:27 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

using std::cout;
using std::endl;

class Fixed {

public:
	Fixed();
	~Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);

	int getRawBits(void) const;
	void setRawBits(const int raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	static const int fractional = 8;
	int value;
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);

#endif