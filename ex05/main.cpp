/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:44:42 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:47:22 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl	harl;

	(void) argc;
	(void) argv;
	/* Debug complain */
	harl.complain("DEBUG");
	/* Info complain */
	harl.complain("INFO");
	/* Warning complain */
	harl.complain("WARNING");
	/* Error complain */
	harl.complain("ERROR");
	/* Unknown complain */
	harl.complain("");
	return (0);
}