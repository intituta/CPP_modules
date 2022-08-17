/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:50:28 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/17 15:37:41 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "---" << std::endl;

	Span spa(10000);
	for (int i = 0; i < 10000; ++i) {
		spa.addNumber(i);
	}

	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;
	std::cout << "---" << std::endl;

	std::vector<int> vector;
	for (int i = 0; i < 10; ++i) {
		vector.push_back(i);
	}

	Span range(15);
	range.addRange(vector.begin(), vector.end());

	try {
		range.addRange(vector.begin(), vector.end());
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	vector.clear();
	for (int i = 10; i < 15; ++i) {
		vector.push_back(i);
	}

	range.addRange(vector.begin(), vector.end());

	std::cout << range.shortestSpan() << std::endl;
	std::cout << range.longestSpan() << std::endl;

	return 0;
}