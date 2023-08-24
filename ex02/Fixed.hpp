/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:25:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/24 18:21:03 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define C_RESET 	"\x1b[0m"
# define C_RED		"\x1b[31m\x1b[1m"
# define C_GRY		"\x1b[90m\x1b[1m"
# define C_GRN		"\x1b[32m\x1b[1m"

class Fixed {

	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int	number);
		Fixed(const float	number);
		~Fixed(void);

		Fixed	&operator=(const Fixed &fixed);
		bool	operator<(const Fixed &fixed);
		bool	operator>(const Fixed &fixed);
		bool	operator<=(const Fixed &fixed);
		bool	operator>=(const Fixed &fixed);
		bool	operator==(const Fixed &fixed);
		bool	operator!=(const Fixed &fixed);
		Fixed	&operator+(const Fixed &fixed);
		Fixed	&operator-(const Fixed &fixed);
		Fixed	&operator*(const Fixed &fixed);
		Fixed	&operator/(const Fixed &fixed);
		Fixed	&operator++(void);
		Fixed	operator++(int);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif