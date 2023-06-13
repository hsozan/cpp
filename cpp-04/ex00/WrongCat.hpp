/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:12:07 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 19:15:44 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	// Constructors
	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat(std::string type);

	// Destructor
	~WrongCat();

	// Operators
	WrongCat &operator=(const WrongCat &assign);

	void makeSound() const;

private:
};

#endif
