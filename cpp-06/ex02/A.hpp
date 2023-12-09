#ifndef A_H
#define A_H

# include "Base.hpp"

class A : public Base
{
};

std::ostream&	operator<<( std::ostream& stream, const A& obj );

#endif /* A_H */