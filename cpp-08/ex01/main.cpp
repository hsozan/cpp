#include "Span.hpp"

void	ft_print_line( void )
{
	std::cout << "--------------------------------------------------------" << std::endl;
}

int main(void)
{
	// Subject main
	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << YELLOW <<"Out of Range exception test:" << RESET << std::endl;
	try
	{
		sp.addNumber(12); // out of range exception
	}
	catch (std::out_of_range &e)
	{
		std::cout << RED << e.what() << RESET <<std::endl;
	}	
	ft_print_line();
	std::cout << YELLOW <<"sp :\n" << RESET << sp;
	std::cout << YELLOW << "Shortest span: ";
    std::cout << CYAN << sp.shortestSpan() << RESET << std::endl; // 5 - 3 or 11 - 9 = 2
	std::cout << YELLOW << "Longest span:  ";
    std::cout << MAGENTA << sp.longestSpan() << RESET << std::endl; // 17 - 3 = 14
	ft_print_line();

	// My tests
	// ---------------------------------------------
	// A "Span" which has elements:
	// - starting at '0'
	// - going up to '10'
	// - with a difference of '1' between each element
	Span	sp1(0, 10, 1);
	std::cout << YELLOW <<"sp1 :\n" << RESET <<sp1;
	std::cout << YELLOW << "Shortest span: ";
    std::cout << CYAN << sp1.shortestSpan() << RESET <<std::endl; // 10, it's in the constructor
	std::cout << YELLOW << "Longest span:  ";
    std::cout << MAGENTA << sp1.longestSpan() <<RESET <<std::endl; // 2000001 - 10 = 1999990
	ft_print_line();

	// A "Span" which has elements:
	// - starting at '1'
	// - going up to '2000000'
	// - with a difference of '10' between each element
	Span	sp2(1, 2000000, 10);
    std::cout << YELLOW <<"sp2 :\n" << RESET;
	std::cout << YELLOW << "Shortest span: "; 
    std::cout << CYAN << sp2.shortestSpan() << RESET << std::endl; // 10, it's in the constructor
	std::cout << YELLOW << "Longest span:  ";
    std::cout << MAGENTA << sp2.longestSpan() << RESET << std::endl; // 2000001 - 10 = 1999990
	ft_print_line();

	Span	sp3 = Span(30);
    
    std::vector<int>	v=sp1.getVector();
	my_iter a = v.begin();
	my_iter b = v.end();
	// Add "1 2 3 4 5 6 7 8 9" to sp3
	sp3.addNumber(a, b);
	sp3.addNumber(a, b);
	std::cout << YELLOW <<"sp3 :\n" << RESET;
	std::cout << sp3;
	std::cout << YELLOW << "Shortest span: "; 
    std::cout << CYAN << sp3.shortestSpan() << RESET << std::endl; // 5 - 3 or 11 - 9 = 2
	std::cout << YELLOW << "Longest span:  ";
    std::cout << MAGENTA << sp3.longestSpan() << RESET << std::endl; // 17 - 3 = 14
	ft_print_line();

	// Span with max 0 elements
	Span	sp4(0);
	std::cout << YELLOW <<"sp4 :\n" << RESET;
	std::cout << sp4;
	// Add an element to it
	try
	{
		sp4.addNumber(5); // out of range exception
	}
	catch (std::out_of_range &e)
	{
		std::cout << RED << e.what() << RESET <<std::endl;
	}
	// Its shortest span
	try
	{
		sp4.shortestSpan(); // out of range exception
	}
	catch (std::out_of_range &e)
	{
		std::cout << RED << e.what() << RESET <<std::endl;
	}
	// Its longest span
	try
	{
		sp4.longestSpan(); // out of range exception
	}
	catch (std::out_of_range &e)
	{
		std::cout << RED << e.what() << RESET <<std::endl;
	}
	ft_print_line();
    //system("leaks Span");
	return (0);
}