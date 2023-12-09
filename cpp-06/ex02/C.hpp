#ifndef C_H
#define C_H

# include "Base.hpp"

class C : public Base
{
};

std::ostream&	operator<<( std::ostream& stream, const C& obj );

#endif /* C_H */