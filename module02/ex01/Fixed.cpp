/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:15:43 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 11:55:54 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	this->value = i << fractional;
}

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	this->value = std::roundf(f * (1 << fractional));
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

float Fixed::toFloat() const {
	return (float) this->value / (1 << fractional);
}

int Fixed::toInt() const {
	return this->value >> fractional;
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed) {
	return os << fixed.toFloat();
}