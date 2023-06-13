/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:39 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 19:15:08 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	// Constructors
	Dog();
	Dog(const Dog &copy);
	Dog(std::string type);

	// Destructor
	~Dog();

	// Operators
	Dog &operator=(const Dog &assign);

	void makeSound() const;
	const Brain &getBrain() const;

private:
	Brain *_dogBrain;
};

#endif
