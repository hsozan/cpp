#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie
{
private:
    std::string	_name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void	announce(void);
    static void	announcehorde(Zombie *zombies, int N);
    void	setName(std::string name);
    Zombie(Zombie const &other);
};

Zombie *zombieHorde(int N, std::string name);

#endif