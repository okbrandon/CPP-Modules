/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 10:06:49 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/11/20 18:36:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShruberryCreationForm.hpp"

int	main(void)
{
	Bureaucrat				bureaucrat("some bureau", 144);
	ShruberryCreationForm	shruberry("home");

	bureaucrat.signForm(shruberry);
	shruberry.execute(bureaucrat);

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}