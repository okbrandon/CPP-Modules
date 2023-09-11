/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:38:13 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/11 14:52:26 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

	protected:
		std::string	_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wrongAnimal);
		virtual ~WrongAnimal(void);

		virtual WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);

		void	makeSound(void) const;

		std::string	getType(void) const;

};

#endif