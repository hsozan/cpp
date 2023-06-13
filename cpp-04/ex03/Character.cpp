/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:13:10 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/12 21:44:15 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(void)
{
	this->_count = 0;
	this->_name = "Anonymous";
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Default constructor is called of " << this->_name << std::endl;
}

Character::Character(const std::string &name)
{
	this->_count = 0;
	this->_name = name;
	for (size_t i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Fields constructor is called of " << this->_name << std::endl;
}

Character::Character(const Character &copy)
{
	this->_name = copy._name;
	this->_count = copy._count;
	this->~Character();
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = (copy._inventory[i]) ? copy._inventory[i]->clone() : NULL;
	std::cout << "Copy constructor is called of " << this->_name << std::endl;
}

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	std::cout << "Destructor is called of " << this->_name << std::endl;
}

Character &Character::operator=(const Character &assign)
{
	this->_name = assign._name;
	this->_count = assign._count;
	this->~Character();
	for (size_t i = 0; i < 4; i++)
		this->_inventory[i] = (assign._inventory[i]) ? assign._inventory[i]->clone() : NULL;
	std::cout << "Assign operator is called of " << this->_name << std::endl;
	return *this;
}

std::string const &Character::getName(void) const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	if (this->_count == 4)
	{
		std::cout << "Inventory is full!" << std::endl;
		return;
	}
	this->_inventory[this->_count] = m->clone();
	this->_count++;
	std::cout << "Equipped: " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index! Should be [0-3]" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "That slot is empty!" << std::endl;
		return;
	}
	this->_inventory[idx] = NULL;
	this->_count--;
	std::cout << "Unequipped: " << this->_inventory[idx]->getType() << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Wrong index! Should be [0-3]" << std::endl;
		return;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "That slot is empty!" << std::endl;
		return;
	}
	this->_inventory[idx]->use(target);
}
