#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include "Colours.hpp"
template< typename T>
class Array
{
	public:
		// Constructors
		Array(void)
		{
			_n = 0;
			_t = new T[1];
			_t[0] = 0;
		}
		Array( unsigned int n ) : _n(n) { _t = new T[n];}
		// Copy constructor (Deep copy)
		Array(Array const & ref) : _n(ref.size())
		{
			T	*ref_t = ref.getT();
			_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = ref_t[i];
		}

		// Destructor
		~Array(void)
		{
			delete [] this->_t;
		}

		// = operator
		Array & operator=(Array const & ref)
		{
			T	*ref_t = ref.getT();
			this->_n = ref.size();
			delete [] this->_t;
			this->_t = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_t[i] = ref_t[i];
			return (*this);
		}

		// [] operator
		T	& operator[](int i)
		{
			if (i < 0 || i >= static_cast<int>(this->_n))
			{
				throw (std::exception());
			}
			else
				return (*(_t + i));
		}
		
		// Getters:
		T 				*getT( void ) const { return (_t); }
		unsigned int	size( void ) const { return (_n); }
	private:
		T				*_t;
		unsigned int	_n;
};

template< typename T >
std::ostream & operator<<(std::ostream & o, Array< T > const & ref)
{
	for (unsigned int i = 0; i < ref.size(); i++)
	{	std::cout << GREEN << "T[" << BLUE << i << GREEN << "]"<< RESET << MAGENTA <<" : ";
		std::cout << CYAN << (ref.getT())[i] << RESET << std::endl;
	}
	return (o);
}

#endif