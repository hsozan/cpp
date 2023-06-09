#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _rawBits;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(int const value);
	Fixed(Fixed const &other);
	~Fixed();

	Fixed	&operator=(Fixed const &other);
	int		getRawBits() const;
	void	setRawBits(int const raw);

};

#endif