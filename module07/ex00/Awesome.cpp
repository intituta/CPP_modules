/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:56:57 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 11:01:24 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome() : _n(0) {}

Awesome::Awesome(int n) : _n(n) {}

Awesome &Awesome::operator=(Awesome &a) {
	_n = a._n;
	return *this;
}

bool Awesome::operator==(const Awesome &a) const {
	return this->_n == a._n;
}

bool Awesome::operator!=(const Awesome &a) const {
	return this->_n != a._n;
}

bool Awesome::operator>(const Awesome &a) const {
	return this->_n > a._n;
}

bool Awesome::operator<(const Awesome &a) const {
	return this->_n < a._n;
}

bool Awesome::operator>=(const Awesome &a) const {
	return this->_n >= a._n;
}

bool Awesome::operator<=(const Awesome &a) const {
	return this->_n <= a._n;
}

int Awesome::get_n() const {
	return _n;
}

std::ostream &operator << (std::ostream &os, const Awesome &a) {
	return os << a.get_n();
}