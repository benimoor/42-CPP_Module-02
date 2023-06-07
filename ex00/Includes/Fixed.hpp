/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:08:54 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/07 12:41:19 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fp;
	static const int	_bits = 8;
public:
	Fixed(/* args */);
	Fixed( const Fixed & );
	Fixed& operator=(const Fixed &);
	~Fixed();

public:
	int		getRawBits() const;
	void	setRawBits( int const raw );
};
#endif