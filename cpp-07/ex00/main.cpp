#include <iostream>
#include "Whatever.hpp"

int	main( void )
{
	// INT
	int			n1 = 43;
	int			n2 = -12;

	// FLOAT
	float		f1 = 0.0f;
	float		f2 = -475.14f;

	// STRING
	std::string	s1 = "Hello";
	std::string	s2 = "World!";

	// CHAR
	char		c1 = 'a';
	char		c2 = 'b';

	// DOUBLE
	double		d1 = 4.4;
	double		d2 = 4.4;

	//---------------------------- TESTS -----------------------------------

	// INT
	ft_test(n1, n2, "int");

	// FLOAT
	ft_test(f1, f2, "float");

	// DOUBLE
	ft_test(d1, d2, "double");

	// STRING
	ft_test(s1, s2, "string");

	// CHAR
	ft_test(c1, c2, "char");

	return (0);
}

// ---------------------------- SUBJECT MAIN -----------------------------------
// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }