#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3
#define TOTAL_LEVEL 4

class Harl;


typedef struct s_complain {
    std::string level;
    void        (Harl::*funcPtr)();
} t_complain;


class Harl {
private:
    t_complain  complainList[TOTAL_LEVEL];
    
    void        debug( void );
    void        info( void );
    void        warning( void );
    void        error( void );

public:
    Harl( void );
    ~Harl();
    void        complain( std::string level );
};

# endif