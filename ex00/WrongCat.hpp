/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:43:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/10/05 16:29:58 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

	public:
		/* Constructors & Destructors */
		WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		~WrongCat(void);

		/* Functions */
		void	makeSound(void) const;

		/* Overloaded operators */
		virtual WrongCat	&operator=(const WrongCat &wrongCat);

};

#endif