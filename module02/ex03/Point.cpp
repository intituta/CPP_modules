/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 14:00:55 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 14:02:00 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point() {}

Point::Point(const Point &point) : x(point.x), y(point.y) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

float Point::getX() const {
	return this->x.toFloat();
}

float Point::getY() const {
	return this->y.toFloat();
}