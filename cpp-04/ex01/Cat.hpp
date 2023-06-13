/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:11:32 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/09 18:47:10 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

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
	const Brain& getBrain() const;

private:
	Brain* _catBrain;
};

#endif
