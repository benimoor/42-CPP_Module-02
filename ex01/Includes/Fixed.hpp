/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:08:54 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/05 19:19:18 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <ostream>
# include <cmath>

class Fixed
{
private:
	int					_fp;
	static const int	_bits = 8;
public:
	Fixed(/* args */);
	Fixed(int const);
	Fixed(float const);
	Fixed( const Fixed & );
	Fixed& operator=(const Fixed &);
	~Fixed();

public:
	float toFloat( void ) const;
	int toInt( void ) const;

	int		getRawBits() const;
	void	setRawBits(int);
	
};

std::ostream& operator << (std::ostream & out, Fixed const &in);
#endif