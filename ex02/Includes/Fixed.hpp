/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:08:54 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/05 19:18:19 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	int					_fp;
	static const int	_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator = (const Fixed& other);
	
	Fixed(const int number);
	Fixed(const float number);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	
	bool	operator > (const Fixed& other);
	bool	operator < (const Fixed& other);
	bool	operator >= (const Fixed& other);
	bool	operator <= (const Fixed& other);
	bool	operator == (const Fixed& other);
	bool	operator != (const Fixed& other);
	
	Fixed	operator + (const Fixed& other);
	Fixed	operator - (const Fixed& other);
	Fixed	operator * (const Fixed& other);
	Fixed	operator / (const Fixed& other);

	Fixed&	operator -- ();
	Fixed&	operator ++ ();
	Fixed	operator ++ (int);
	Fixed	operator -- (int);

	static Fixed		&min(Fixed &a, Fixed &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&min(const Fixed &a, const Fixed &b);
	static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream& operator << (std::ostream& out, Fixed const &in);

#endif