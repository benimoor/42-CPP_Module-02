/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:39:25 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/06 22:05:43 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	areaTriangle(Point const &a, Point const &b, Point const &c)
{
	Fixed A, B, C, area;

	A = a.getX() * (b.getY() - c.getY());
	B = b.getX() * (c.getY() - a.getY());
	C = c.getX() * (a.getY() - b.getY());
	area = A + B + C;
	if (area < 0)
		area = area * Fixed(-1);
	return area / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	 Fixed ABC, PAB, PAC, PBC;
	 ABC = areaTriangle(a,b,c);
	 PAB = areaTriangle(p,a,b);
	 PAC = areaTriangle(p,a,c);
	 PBC = areaTriangle(p,b,c);
	 if (ABC == 0 || PAB == 0 || PAC == 0 || PBC == 0)
	 	return false;
	return (ABC == (PAB + PAC + PBC) ? true : false);
}