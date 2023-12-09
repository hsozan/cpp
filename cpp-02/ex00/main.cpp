#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	//a.setRawBits(42);
	Fixed b( a );
	Fixed c;
	//b.setRawBits(42);
	b = c;
	c = b;
	b.setRawBits(42);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}