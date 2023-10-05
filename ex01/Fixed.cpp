/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:52:16 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/05 16:56:10 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_number_of_fractional_bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int number)
{
	_fixed_point_number = number;
	std::cout << "Int int constructor called\n";
}

Fixed::Fixed(const float number)
{
	_fixed_point_number = (int)number;
	std::cout << "Float constructor called" << _fixed_point_number << std::endl;
	
}


Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment constructor called\n";
	setRawBits(other.getRawBits());
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (_fixed_point_number);
}

void Fixed::setRawBits(int const raw)
{
	_fixed_point_number = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)_fixed_point_number);
}
