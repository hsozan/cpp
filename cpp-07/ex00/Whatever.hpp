#ifndef	WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

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
	std::cout << a << " | " <<  b << std::endl;
}

template< typename T>
void ft_test(T a, T b, std::string type)
{

	std::cout << type << std::endl;
	std::cout << "----------------------------" << std::endl;
	
	// Swap test
	std::cout << "SWAP: " << std::endl;
	std::cout << "Before swapping: \n";
	ft_print_pair(a, b);
	std::cout << "------" << std::endl;
	swap(a, b);
	std::cout << "After swapping: \n";
	ft_print_pair(a, b);
	std::cout << std::endl;

	// Min test
	std::cout << "MIN: " << std::endl;
	std::cout << ::min(a, b) << std::endl << std::endl;

	// Max test	
	std::cout << "MAX: " << std::endl;
	std::cout << ::max(a, b) << std::endl << std::endl;
	std::cout << std::endl << std::endl;
}

#endif