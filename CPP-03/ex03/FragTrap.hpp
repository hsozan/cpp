#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    // Constructors
    FragTrap();
    FragTrap(const FragTrap &copy);
    FragTrap(std::string name);

    // Destructor
    ~FragTrap();

    // Operators
    FragTrap &operator=(const FragTrap &assign);

    // Other Members
    void attack(std::string const &target);
    void highFivesGuys(void);

private:
};

#endif
