#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _rawBits;
	static const int _bits = 8;
public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &other);
	~Fixed();

	Fixed	&operator=(Fixed const &other);

	//logical operators
	bool	operator>(Fixed const &other) const;
	bool	operator<(Fixed const &other) const;
	bool	operator>=(Fixed const &other) const;
	bool	operator<=(Fixed const &other) const;
	bool	operator==(Fixed const &other) const;
	bool	operator!=(Fixed const &other) const;

	//Fixed foo = Fixed(42) + Fixed(420);
	Fixed	operator+(Fixed const &other) const;
	//Fixed foo = Fixed(42) - Fixed(420);
	Fixed	operator-(Fixed const &other) const;
	//Fixed foo = Fixed(42) * Fixed(420);
	Fixed	operator*(Fixed const &other) const;
	//Fixed foo = Fixed(42) / Fixed(420);
	Fixed	operator/(Fixed const &other) const;

	//foo++
	Fixed	operator++(int);
	//foo--
	Fixed	operator--(int);
	//++foo
	Fixed	&operator++();
	//--foo
	Fixed	&operator--();

	//get and set
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	//converters
	float	toFloat(void) const;
	int		toInt(void) const;

	//max and min
	static Fixed max(Fixed &a, Fixed &b);
	static Fixed min(Fixed &a, Fixed &b);
	//const max and min
	static const Fixed max(Fixed const &a, Fixed const &b);
	static const Fixed min(Fixed const &a, Fixed const &b);

};

std::ostream &operator<<(std::ostream &o, Fixed const &src);

#endif