/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:25:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 10:05:24 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

class Fixed {

	private:
		int					_value;
		static const int	_fractionalBits = 8;

	public:
		/* Constructors & Destructors */
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int	number);
		Fixed(const float	number);
		~Fixed(void);

		/* Getters */
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;

		/* Setters */
		void	setRawBits(int const raw);

		/* Overloaded operators */
		Fixed	&operator=(const Fixed &fixed);

};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif