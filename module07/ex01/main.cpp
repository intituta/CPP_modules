/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:02:51 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 11:22:04 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

void func1(int const &i) {
	std::cout << i << std::endl;
}

void func2(std::string const &string) {
	std::cout << string << std::endl;
}

void func3(float const &f) {
	std::cout << f << std::endl;
}

int main() {

	int a[3] = {100, 200, 300};
	std::string b[3] = {"one", "two", "three"};
	float c[3] = {1.1, 2.2, 3.3};
	Awesome d[3];

	::iter(a, 3, func1);
	::iter(b, 3, func2);
	::iter(c, 3, func3);
	::iter(d, 3, print);
}