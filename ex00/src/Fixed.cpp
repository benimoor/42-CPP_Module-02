/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:12:43 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 12:41:48 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	
};
void	Fixed::setRawBits(int const gago)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fp = gago;
}
