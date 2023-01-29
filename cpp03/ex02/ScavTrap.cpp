#include "ScavTrap.hpp"
//////////////
//[ Basics ]//
//////////////
ScavTrap::ScavTrap ( void ) : ClapTrap () {
     std::cout << "[ ScavTrap ]Default constructor called" << std::endl;
}
ScavTrap::ScavTrap ( std::string name ) : ClapTrap ( name ) {
    std::cout << "[ ScavTrap ]Name constructor called" << std::endl;
}
ScavTrap::ScavTrap ( const ScavTrap& other) : ClapTrap ( other ) {
    std::cout << "[ ScavTrap ]Copy constructor called" << std::endl;
}
ScavTrap& ScavTrap::operator= ( const ScavTrap& other ) {
    std::cout << "[ ScavTrap ]Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return (*this);
}
ScavTrap::~ScavTrap () {
    std::cout << "[ ScavTrap ]Destructor called" << std::endl;
}
///////////////////////////
//[ Redefined functions ]//
///////////////////////////
void    ScavTrap::attack ( const std::string& target ) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "ScavTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target 
    << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}
void    ScavTrap::takeDamage ( unsigned int amount ) {
    std::cout << "ScavTrap " << this->_name << " takes "
    << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}
void    ScavTrap::beRepaired( unsigned int amount) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "ScavTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " regains " 
    << amount << " hit points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}
///////////////////////
//[ Other functions ]//
///////////////////////
void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << this->_name << " is on Gate Keeper mode." << std::endl;
}
