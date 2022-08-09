/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:15:52 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 12:49:46 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>

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

	bool operator > (const Fixed &fixed);
	bool operator < (const Fixed &fixed);
	bool operator >= (const Fixed &fixed);
	bool operator <= (const Fixed &fixed);
	bool operator == (const Fixed &fixed);
	bool operator != (const Fixed &fixed);

	Fixed operator + (const Fixed &fixed);
	Fixed operator - (const Fixed &fixed);
	Fixed operator * (const Fixed &fixed);
	Fixed operator / (const Fixed &fixed);

	Fixed &operator ++ ();
	Fixed operator ++ (int);
	Fixed &operator -- ();
	Fixed operator -- (int);

	static Fixed &min(Fixed &l, Fixed &r);
	static const Fixed &min(const Fixed &l, const Fixed &r);
	static Fixed &max(Fixed &l, Fixed &r);
	static const Fixed &max(const Fixed &l, const Fixed &r);

private:
	static const int fractional = 8;
	int value;
};

std::ostream &operator << (std::ostream &os, const Fixed &fixed);

#endif