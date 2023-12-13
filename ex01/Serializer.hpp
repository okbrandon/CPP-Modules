/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:52:47 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/23 19:58:41 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include "Data.h"

class Serializer {

	private:
		/* Constructors & Destructors */
		Serializer(void);
		Serializer(Serializer const &serializer);
		~Serializer(void);

		/* Overloaded operators */
		Serializer	&operator=(Serializer const &serializer);

	public:
		/* Functions */
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

};

#endif