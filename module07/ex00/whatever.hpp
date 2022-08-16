/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:57:14 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 11:07:36 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T &l, T &r) {
	T temp = l;
	l = r;
	r = temp;
}

template <typename T>
T min(const T &l, const T &r) {
	return l < r ? l : r;
}

template <typename T>
T max(const T &l, const T &r) {
	return l < r ? r : l;
}

#endif