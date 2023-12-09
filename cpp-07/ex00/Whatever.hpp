#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include "Colours.hpp"

template <typename T>
void	swap(T &a, T &b)
{
	T	aux = a;
	a = b;
	b = aux;
}

/**
 * Passing the parameters as "T const &a" instead of "T a" is better
 * because the program does not create a copy of "a" so is more efficient.
 */
template <typename T>
T const &min(T const &a, T const &b)
{
	return( a < b ? a : b);
}

template <typename T>
T const	&max(T const &a, T const &b)
{
	return( a > b ? a : b);
}

template< typename T>
void	ft_print_pair(T a, T b)
{
	std::cout << CYAN << a << BLUE <<" | " << CYAN << b << RESET <<std::endl;
}

template< typename T>
void ft_test(T a, T b, std::string type)
{

	std::cout << RED << type << RESET <<std::endl;
	std::cout << "----------------------------" << std::endl;
	
	// Swap test
	std::cout << GREEN << "SWAP: " << RESET << std::endl;
	std::cout << YELLOW <<"Before swapping: \n"<< RESET;
	ft_print_pair(a, b);
	std::cout << "------" << std::endl;
	swap(a, b);
	std::cout << YELLOW << "After swapping: \n"<< RESET;
	ft_print_pair(a, b);
	std::cout << std::endl;

	// Min test
	std::cout << GREEN << "MIN: " << RESET << std::endl;
	std::cout << CYAN <<  ::min(a, b) << RESET << std::endl << std::endl;

	// Max test	
	std::cout << GREEN << "MAX: " << RESET << std::endl;
	std::cout << CYAN << ::max(a, b) << RESET << std::endl << std::endl;
	std::cout << std::endl << std::endl;
}

#endif