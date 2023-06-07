/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:27:17 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/06 21:59:47 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	Fixed	const x;
	Fixed	const y;
public:
	Point(/* args */);
	Point(Fixed const &x, Fixed const &y);
	Point(Point const &);
	Point& operator=(Point const &);
	~Point();
	Fixed getX() const;
	Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif