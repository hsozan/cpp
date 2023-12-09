#include <iostream>
#include <iomanip>
#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments\n";
		return (0);
	}
	std::cout << std::fixed << std::setprecision(2);
	std::string	argument = argv[1];
	
	ScalarConverter	converter(argument);

	char		c;
	int			n;
	float		f;
	double		d;

	c = static_cast<char>(converter);
	n = static_cast<int>(converter);
	f = static_cast<float>(converter);
	d = static_cast<double>(converter);

	return (0);
}