/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:25 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 20:13:22 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	// Constructors
	Animal();
	Animal(const Animal &copy);
	Animal(std::string type);

	// Destructor
	virtual ~Animal() = 0;

	// Operators
	Animal &operator=(const Animal &assign);

	// Getters / Setters
	std::string getType() const;
	virtual void makeSound() const = 0;

protected:
	std::string _type;
};

#endif
