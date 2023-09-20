/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:31:43 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/20 19:05:52 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iomanip>

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 54;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n - n / 2);
	std::cout << std::setfill('=') << std::setw(size - size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
}

void testSubject(void)
{
	printTitle("SUBJECT");
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");
	AMateria*	tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("unknown");
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	testCharacter(void)
{
	printTitle("CHARACTER");
	ICharacter	*hero = new Character("Lucie");
	ICharacter	*enemy = new Character("Correcteur");
	AMateria	*ice = new Ice();

	hero->equip(new Ice());
	hero->equip(ice);
	hero->equip(new Cure());
	hero->equip(new Ice());
	hero->equip(new Ice());
	enemy->equip(new Cure());
	enemy->equip(new Cure());
	enemy->equip(new Cure());

	hero->use(0, *enemy);
	hero->use(1, *enemy);
	hero->use(3, *enemy);
	enemy->use(2, *hero);

	hero->unequip(1);
	hero->use(1, *enemy);

	hero->equip(new Cure());
	hero->use(1, *enemy);

	delete hero;
	delete enemy;
	delete ice;
}

void	testMateriaSource()
{
	printTitle("MATERIA SOURCE");
	IMateriaSource	*matSource = new MateriaSource();
	ICharacter		*hero = new Character("Lucie");
	ICharacter		*enemy = new Character("Correcteur");
	
	matSource->learnMateria(new Ice());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());
	matSource->learnMateria(new Cure());

	hero->equip(matSource->createMateria("ice"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("cure"));
	hero->equip(matSource->createMateria("ice"));
	hero->equip(matSource->createMateria("cure"));

	hero->use(0, *enemy);
	hero->use(2, *enemy);
	
	delete matSource;
	delete hero;
	delete enemy;
}

int	main(void)
{
	testSubject();
	testCharacter();
	testMateriaSource();
	return (0);
}