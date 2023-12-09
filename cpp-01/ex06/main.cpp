#include "Harl.hpp"
//red = \033[0;31m
//default = \033[0m
int	main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
		return (std::cerr << "\033[0;31m" << "Harl only needs one level" << "\033[0m" << std::endl, 1);
	
	std::string level = argv[1];

	harl.complain(level);

	return (0);
}