/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:18 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 16:28:38 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors
Animal::Animal()
{
	_type = "Anonymous";
	std::cout << "Default Constructor called of Animal " << _type << std::endl;
}

Animal::Animal(const Animal &copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of Animal " << _type << std::endl;
}

Animal::Animal(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of Animal " << _type << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Destructor called of Animal" << _type << std::endl;
}

// Operators
Animal &Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

// Getters / Setters
std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}
