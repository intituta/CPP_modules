/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:15:30 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 14:03:33 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
	std::cout << bsp(Point(4.6, -1.02),
				Point(6.3, 4.38),
				Point(12.14, 2.58),
				Point(7.78, 2.38)) << std::endl;

	std::cout << bsp(Point(4.6, -1.02),
				Point(6.3, 4.38),
				Point(12.14, 2.58),
				Point(4.72, 0.24)) << std::endl;
}