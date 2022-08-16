/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:50:28 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/16 16:23:33 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <deque>

int main() {
	std::vector<int> vector;
	std::list<int> list;
	std::set<int> set;
	std::deque<int> deque;

	for (int i = 0; i < 5; ++i) {
		vector.push_back(i);
		list.push_back(i);
		set.insert(i);
		deque.push_back(i);
	}

	std::cout << "found: " << easyfind(vector, 3) << std::endl;
	std::cout << "found: " << easyfind(vector, 0) << std::endl;
	std::cout << "found: " << easyfind(list, 3) << std::endl;
	std::cout << "found: " << easyfind(list, 1) << std::endl;
	std::cout << "found: " << easyfind(set, 3) << std::endl;
	std::cout << "found: " << easyfind(set, 2) << std::endl;
	std::cout << "found: " << easyfind(deque, 3) << std::endl;
	std::cout << "found: " << easyfind(deque, 4) << std::endl;

	try {
		std::cout << easyfind(vector, 5) << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << easyfind(list, -1) << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << easyfind(set, 10) << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << easyfind(deque, -10) << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}
}