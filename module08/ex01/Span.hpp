/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:55:56 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/17 12:24:04 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

class Span {
public:
	~Span();
	Span(unsigned int N);
	Span(const Span &span);
	Span &operator = (const Span &span);

	void addNumber(int i);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int shortestSpan();
	int longestSpan();

private:
	Span();
	unsigned int size;
	std::vector<int> vector;
};

#endif