/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:25:25 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/06 22:06:14 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	Fixed x2, y2(40) ;
	Fixed x3(30), y3 ;
	Fixed x = Fixed(-1), y = Fixed(-1) ;
	Point m = Point(x3, y3) ;
	Point a, b(x2, y2), c(m), point(x, y) ;
	
	if (bsp(a, b, c, point))
		std::cout << "true" << std::endl ;
	else
		std::cout << "false" << std::endl ;
	return 0 ;
}