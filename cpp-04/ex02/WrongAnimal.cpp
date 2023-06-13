/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:55 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 19:15:21 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Default Constructor called of " << _type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of " << _type << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
