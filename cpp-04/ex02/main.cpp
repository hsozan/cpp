/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:05:19 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/12 21:59:35 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>

int main()
{
	Cat cat;
	Dog dog;
	//Animal anim; //not allowed
	//Animal *anim = new Animal(); //not allowed
	std::cout << cat.getBrain().getIdea(0) << std::endl;
	std::cout << dog.getBrain().getIdea(1) << std::endl;
}
