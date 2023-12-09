#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	public:
		// Canonic class methods
		ScalarConverter();
		ScalarConverter(std::string str);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const & ref);
		ScalarConverter &	operator=(ScalarConverter const & ref);

		// Getter
		std::string getStr( void ) const;

		// Conversions
		operator char();
		operator int();
		operator float();
		operator double();

	private:
		std::string	_str;
};
#endif