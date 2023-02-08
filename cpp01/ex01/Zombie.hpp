#ifndef ZOMBIE_HPP
# define ZOMEBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;

public:
    Zombie( void );
    Zombie( std::string name );
    ~Zombie();

    void    set_name( std::string name );
    void    announce( void ) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif