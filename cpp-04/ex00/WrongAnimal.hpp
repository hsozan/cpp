/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:12:00 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 19:16:00 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
	// Constructors
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal(std::string type);

	// Destructor
	~WrongAnimal();

	// Operators
	WrongAnimal &operator=(const WrongAnimal &assign);

	// Getters / Setters
	std::string getType() const;
	void makeSound() const;

protected:
	std::string _type;
};

#endif
