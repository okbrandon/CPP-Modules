/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:25:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/21 17:24:18 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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
		~Fixed(void);

		Fixed	&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif