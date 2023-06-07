/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:31:41 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/06 22:00:43 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(/* args */): x(0), y(0){};
Point::Point(Fixed const &r_x, Fixed const &r_y) : x(r_x), y(r_y){};
Point::Point(Point const &other) : x(other.x), y(other.y){};
Point& Point::operator=(Point const &other)
{
	if (this == &other)
		return *this;
	return *this;
}
Fixed Point::getX() const{return x;}
Fixed Point::getY() const{return y;}
Point::~Point(){};