#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;

    public:
    DiamondTrap ( void );
    DiamondTrap ( std::string name );
    DiamondTrap ( const DiamondTrap& other);
    DiamondTrap& operator= ( const DiamondTrap& other );
    ~DiamondTrap ();

    std::string    getName( void ) const;
    void    attack ( const std::string& target );

    void    whoAmI( void );
};

#endif