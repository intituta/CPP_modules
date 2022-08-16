/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:56:57 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 11:13:18 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome() : _n(42) {}

int Awesome::get() const {
	return this->_n;
}

std::ostream &operator << (std::ostream &os, const Awesome &a) {
	return os << a.get();
}