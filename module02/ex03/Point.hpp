/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:01:10 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 14:01:44 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {

public:
	Point();
	~Point();
	Point(const Point &point);
	Point(const float x, const float y);

	float getX() const;
	float getY() const;

private:
	Point &operator = (const Point &point);
	const Fixed x;
	const Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif