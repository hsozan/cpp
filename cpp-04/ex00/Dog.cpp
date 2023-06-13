/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:35 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 19:16:21 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors
Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default Constructor called of " << _type << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	_type = copy.getType();
	std::cout << "Copy Constructor called of " << _type << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	std::cout << "Fields Constructor called of " << _type << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Destructor called of " << _type << std::endl;
}

// Operators
Dog &Dog::operator=(const Dog &assign)
{
	_type = assign.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
