#include "Array.hpp"

static void	ft_tests( void )
{
	// Empty
	std::cout << std::endl << BLUE << "Empty array" << RESET << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int>	arr;
	try
	{
		std::cout << YELLOW << "Acessing element 0: " << RESET;
		std::cout << arr[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << RED <<e.what() << RESET <<std::endl << std::endl;
	}
	try
	{
		std::cout << YELLOW << "Assigning element 4: " << RESET << std::endl;
		arr[4] = 4;
	}
	catch (std::exception &e)
	{
		std::cout << RED <<e.what() << RESET << std::endl;
	}
	std::cout << arr << std::endl;

	// INT
	std::cout << std::endl << BLUE << "Int array" << RESET << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int> narr(4);
	std::cout << YELLOW << "Before assigning: \n" << RESET ;
	std::cout << narr << std::endl;
	narr[0] = 8;
	narr[1] = 2;
	narr[2] = -64;
	narr[3] = 248;
	std::cout << YELLOW << "After assigning: \n" << RESET;
	std::cout << narr << std::endl;

	// CHAR
	std::cout << std::endl << BLUE << "Char array" << RESET << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<char> carr(4);
	std::cout << YELLOW << "Before assigning: \n" << RESET;
	std::cout << carr << std::endl;
	carr[1] = 'b';
	carr[2] = 'c';
	std::cout << YELLOW << "After assigning: \n" << RESET;
	std::cout << carr << std::endl;

	// FLOAT
	std::cout << std::endl << BLUE << "Float array" << RESET << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<float> farr(4);
	std::cout << YELLOW << "Before assigning: \n" << RESET;
	std::cout << farr << std::endl;
	farr[0] = 3.14f;
	farr[1] = -48.49f;
	farr[2] = 0.0f;
	farr[3] = 22.22f;
	std::cout << YELLOW << "After assigning: \n" << RESET;
	std::cout << farr << std::endl;

	// STRING
	std::cout << std::endl << BLUE << "String array" << RESET << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<std::string> sarr(4);
	std::cout << YELLOW << "Before assigning: \n" << RESET;
	std::cout << sarr << std::endl;
	sarr[0] = "First string";
	sarr[1] = "Second string";
	sarr[2] = "Third string";
	sarr[3] = "Fourth string";
	std::cout << YELLOW << "After assigning: \n" << RESET;
	std::cout << sarr << std::endl;
}

int main(void)
{
	ft_tests();
	//system("leaks Arr");
	return (0);
}