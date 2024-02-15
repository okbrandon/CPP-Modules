/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:59:46 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:54:15 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << BCYN "[ DEBUG ]" CRESET << std::endl;
	std::cout << "I love having extra bacon for my " \
			<< "7XL-double-cheese-triple-pickle-special-ketchup " \
			<< "burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << BGRN "[ INFO ]" CRESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. " \
			<< "You didn't put enough bacon in my burger! " \
			<< "If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << BYEL "[ WARNING ]" CRESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. " \
			<< "I've been coming for years whereas you started working here " \
			<< "since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << BRED "[ ERROR ]" CRESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
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
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(harl.*matchLvl[i])();
			return ;
		}
	}
}