#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public:
    ClapTrap ( void );
    ClapTrap ( const std::string name );
    ClapTrap ( const ClapTrap& other);
    ClapTrap& operator= ( const ClapTrap& other );
    ~ClapTrap ();

    std::string    getName( void ) const;
    int             getHitPoints( void ) const;
    int             getEnergyPoints( void ) const;
    int             getAttackDamage ( void ) const;

    void    attack ( const std::string& target );
    void    takeDamage ( unsigned int amount );
    void    beRepaired( unsigned int amount);
};

#endif