#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include "Colours.hpp"

template< typename T>
void iter(T *array, int array_length, void f(T const &ref))
{
	for(int i = 0; i < array_length; i++)
		f(array[i]);
}

// HELPER FUNCTIONS:
template< typename T>
void	display(T const &t)
{
	std::cout << CYAN << t << RESET <<" ";
}

template< typename T>
void ft_tests(T t, int len, std::string type)
{
	std::cout << std::endl << RED << type << RESET << std::endl;
	std::cout << GREEN << "----------------------------" << RESET << std::endl;
	iter(t, len, display);
	std::cout << std::endl << std::endl;
}

#endif