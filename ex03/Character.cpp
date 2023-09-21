/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:03:35 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 13:58:51 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructors & Destructors */
Character::Character(void) {
	this->_name = "unidentified";
	this->_createInventory();
}

Character::Character(const std::string &name) {
	this->_name = name;
	this->_createInventory();
}

Character::Character(const Character &character) {
	this->_createInventory();
	*this = character;
}

Character::~Character(void) {
	this->_deleteInventory();
}

/* Private functions */
void	Character::_createInventory(void) {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
}

void	Character::_deleteInventory(void) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->_inventory[i]) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

/* Functions */
void	Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
				" equiped " BCYN << m->getType() << CRESET "..." << std::endl;
			return ;
		}
	}
	std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
		" couldn't equip " BCYN << m->getType() << CRESET "..." << std::endl;
	delete m; // Deleting Materia since inventory is full
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
			" can't unequip item id " BCYN << idx << CRESET "..." << std::endl;
		return ;
	}
	if (!this->_inventory[idx]) {
		std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
			" cannot unequip a non-existent item..." << std::endl;
		return ;
	}
	this->_inventory[idx] = NULL; // NULLing item but not deleting it
	std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
		" unequiped item id " BCYN << idx << CRESET "..." << std::endl;
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
			" can't use item id " BCYN << idx << CRESET "..." << std::endl;
		return ;
	}
	if (!this->_inventory[idx]) {
		std::cout << BYEL "[Character] " BCYN << this->_name << CRESET << \
			" cannot use a non-existent item..." << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

/* Getters */
std::string const	&Character::getName(void) const {
	return (this->_name);
}

/* Overloaded operators */
Character	&Character::operator=(const Character &character) {
	this->_name = character._name;
	this->_deleteInventory();
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (character._inventory[i])
			this->_inventory[i] = character._inventory[i]->clone(); // Cloning materia
	return (*this);
}