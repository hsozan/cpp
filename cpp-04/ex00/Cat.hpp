/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:32 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 16:53:21 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	// Constructors
	Cat();
	Cat(const Cat &copy);
	Cat(std::string type);

	// Destructor
	~Cat();

	// Operators
	Cat &operator=(const Cat &assign);

	void makeSound() const;

private:
};

#endif
