/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgodecke <cgodecke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 09:52:36 by cgodecke          #+#    #+#             */
/*   Updated: 2023/10/25 11:09:34 by cgodecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	_number_of_fractional_bits;

	public:
		// Constructors
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &other);
		Fixed &operator = (const Fixed &other);
		~Fixed();

		// Member functions
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		// Overload operators
		bool operator > (const Fixed &other) const;
		bool operator < (const Fixed &other) const;
		bool operator >= (const Fixed &other) const;
		bool operator <= (const Fixed &other) const;
		bool operator == (const Fixed &other) const;
		bool operator != (const Fixed &other) const;

		Fixed operator + (const Fixed &other) const;
		Fixed operator - (const Fixed &other) const;
		Fixed operator * (const Fixed &other) const;
		Fixed operator / (const Fixed &other) const;

		Fixed operator ++ (void);
		Fixed operator ++ (int);
		Fixed operator -- (void);
		Fixed operator -- (int);
};

std::ostream &operator<<(std::ostream &os,  Fixed const &fixed);

#endif
