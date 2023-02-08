#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3
#define TOTAL_LEVEL 4

class Harl {
private:
    std::string  complainList[TOTAL_LEVEL];
    int         _level;
    
    void        debug( void );
    void        info( void );
    void        warning( void );
    void        error( void );
    void        silence( void );

public:
    Harl( std::string level );
    ~Harl();
    void        complain();
};

# endif