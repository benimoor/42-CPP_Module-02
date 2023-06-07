/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:12:43 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/05 16:51:29 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(int const m_int)
{
	this->setRawBits(m_int << _bits);
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(float const m_float)
{
	this->setRawBits((int)roundf(m_float * (1 << _bits)));
	std::cout << "Float constructor called" << std::endl;
}
	
Fixed::Fixed()
{
	_fp = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & m_fix)
{
	std::cout << "Copy constructor called" << std::endl;
	_fp = m_fix._fp;
}

Fixed & Fixed::operator=(const Fixed & m_fix)
{
	if (this != &m_fix)
	{
		_fp = m_fix._fp;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}
Fixed::~Fixed()
{	
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fp;	
}
void	Fixed::setRawBits(int gago)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fp = gago;
}

std::ostream& operator << (std::ostream & out, Fixed const &in)
{
	out << in.toFloat();
	return out;
}

float Fixed::toFloat( void ) const
{
	return (float)(_fp) / (1 << _bits);	
}

int Fixed::toInt( void ) const
{
	return _fp >> _bits;
}
