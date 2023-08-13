/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:59:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/13 12:10:01 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << C_GRY << "I love having extra bacon for my " \
			<< "7XL-double-cheese-triple-pickle-special-ketchup " \
			<< "burger. I really do!" << C_RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << C_GRN << "I cannot believe adding extra bacon costs more money. " \
			<< "You didn't put enough bacon in my burger! " \
			<< "If you did, I wouldn't be asking for more!" << C_RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << C_YEL << "I think I deserve to have some extra bacon for free. " \
			<< "I've been coming for years whereas you started working here " \
			<< "since last month." << C_RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << C_RED << "This is unacceptable! I want to speak to the manager now." \
			<< C_RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};
	void (Harl::*matchLvl[])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	Harl	harl;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(harl.*matchLvl[i])();
			return ;
		}
	}
	std::cerr << C_RED << "Cannot find a suitable message for Harl complain." << C_RESET << std::endl;
}