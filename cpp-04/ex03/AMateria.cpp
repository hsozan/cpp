/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:12:40 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/10 21:12:59 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::~AMateria(void)
{
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
}

AMateria &AMateria::operator=(const AMateria &assign)
{
	this->_type = assign._type;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
}

Cure::~Cure(void)
{
}

Cure &Cure::operator=(const Cure &assign)
{
	this->AMateria::operator=(assign);
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
}

Ice &Ice::operator=(const Ice &assign)
{
	this->AMateria::operator=(assign);
	return *this;
}

Ice::~Ice(void)
{
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
