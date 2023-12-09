#ifndef TYPES_H
#define TYPES_H

# include <iostream>
# include "Colours.hpp"

typedef struct s_Data
{
	const char*	name;
	const char*	rank;
}	Data;

std::ostream&	operator<<( std::ostream& stream, const Data& obj);

#endif /* TYPES_H */