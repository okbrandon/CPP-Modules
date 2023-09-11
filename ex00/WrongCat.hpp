/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:43:01 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:54:26 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	private:

	public:
		WrongCat(void);
		WrongCat(const WrongCat &wrongCat);
		~WrongCat(void);

		virtual WrongCat	&operator=(const WrongCat &wrongCat);

		virtual void	makeSound(void) const;

};

#endif