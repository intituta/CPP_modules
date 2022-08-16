/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:50:52 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 16:23:50 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template<typename T>
int easyfind(T &t, int i) {
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);

	if (it != t.end()) {
		return *it;
	} else {
		throw std::runtime_error("Error: elem not found!");
	}
}

#endif