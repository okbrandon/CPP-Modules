/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:31:43 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 14:00:42 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void testSubject(void)
{
	std::cout << BWHT "\n>>> RUNNNING SUBJECT TESTS\n" CRESET << std::endl;
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
	std::cout << BWHT "\n>>> TESTING CHARACTER OBJECT\n" CRESET << std::endl;
	ICharacter	*pedro = new Character("Pedro");
	ICharacter	*ivan = new Character("Ivan");
	AMateria	*ice = new Ice();

	/* Filling Pedro's inventory */
	pedro->equip(new Ice());
	pedro->equip(ice);
	pedro->equip(new Ice());
	pedro->equip(new Cure());
	pedro->equip(new Cure()); // Over filling Pedro's inventory
	/* Filling Ivan's inventory */
	ivan->equip(new Cure());
	ivan->equip(new Cure());
	ivan->equip(new Ice());

	/* Using materias */
	pedro->use(0, *ivan);
	pedro->use(1, *ivan);
	pedro->use(3, *ivan);
	ivan->use(2, *pedro);

	/* Unequiping materia and use empty slot */
	pedro->unequip(1);
	pedro->use(1, *ivan);

	/* Equiping new materia and use the filled slot */
	pedro->equip(new Cure());
	pedro->use(1, *ivan);

	delete pedro;
	delete ivan;
	delete ice;
}

void	testMateriaSource()
{
	std::cout << BWHT "\n>>> TESTING MATERIASOURCE OBJECT\n" CRESET << std::endl;
	IMateriaSource	*materiaSource = new MateriaSource();
	ICharacter		*pedro = new Character("Pedro");
	ICharacter		*brandon = new Character("Brandon");
	
	/* Learning new materias */
	materiaSource->learnMateria(new Ice());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure());
	materiaSource->learnMateria(new Cure()); // Over learning items

	/* Equiping learnt materias */
	pedro->equip(materiaSource->createMateria("cure"));
	pedro->equip(materiaSource->createMateria("cure"));
	pedro->equip(materiaSource->createMateria("ice"));
	pedro->equip(materiaSource->createMateria("ice"));
	pedro->equip(materiaSource->createMateria("cure")); // Over filling Pedro's inventory

	/* Use against Brandon */
	pedro->use(0, *brandon);
	pedro->use(2, *brandon);
	
	delete materiaSource;
	delete pedro;
	delete brandon;
}

int	main(void)
{
	testSubject();
	testCharacter();
	testMateriaSource();

	// Tests are done
	std::cout << BYEL "All tests completed. Want to check for leaks? Run 'make debug'" CRESET << std::endl;
	return (0);
}