/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.INVENTORY_SIZE2nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/1INVENTORY_SIZE 1INVENTORY_SIZE:INVENTORY_SIZE0:55 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/15 17:INVENTORY_SIZE0:32 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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

void	Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		std::cout << "Impossible action." << std::endl;
		return ;
	}
	if (!this->_inventory[idx]) {
		std::cout << "Item is missing." << std::endl;
		return ;
	}
	this->_inventory[idx] = NULL; // NULLing item but not deleting it
}

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		std::cout << "Impossible action." << std::endl;
		return ;
	}
	if (!this->_inventory[idx]) {
		std::cout << "Item is missing." << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

Character	&Character::operator=(const Character &character) {
	this->_name = character._name;
	this->_deleteInventory();
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = character._inventory[i]->clone(); // Cloning materia
	return (*this);
}

std::string const	&Character::getName(void) const {
	return (this->_name);
}
