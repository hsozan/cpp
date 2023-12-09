#ifndef B_H
#define B_H

# include "Base.hpp"

class B : public Base
{
};

std::ostream&	operator<<( std::ostream& stream, const B& obj );

#endif /* B_H */