/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:15:52 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 10:33:02 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed &operator = (const Fixed &fixed);

	int getRawBits(void) const;
	void setRawBits(const int raw);

private:
	static const int fractional = 8;
	int value;
};

#endif