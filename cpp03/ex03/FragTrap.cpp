#include "FragTrap.hpp"
//////////////
//[ Basics ]//
//////////////
FragTrap::FragTrap ( void ) : ClapTrap () {
    std::cout << "[ FragTrap ]Default constructor called" << std::endl;
}
FragTrap::FragTrap ( std::string name ) : ClapTrap ( name ) {
    std::cout << "[ FragTrap ]Name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}
FragTrap::FragTrap ( const FragTrap& other) : ClapTrap ( other ) {
    std::cout << "[ FragTrap ]Copy constructor called" << std::endl;
}
FragTrap& FragTrap::operator= ( const FragTrap& other ) {
    std::cout << "[ FragTrap ]Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    ClapTrap::operator=(other);
    return (*this);
}
FragTrap::~FragTrap () {
    std::cout << "[ FragTrap ]Destructor called" << std::endl;
}
///////////////////////////
//[ Redefined functions ]//
///////////////////////////
void    FragTrap::attack ( const std::string& target ) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "FragTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " attacks " << target 
    << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}
void    FragTrap::takeDamage ( unsigned int amount ) {
    std::cout << "FragTrap " << this->_name << " takes "
    << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}
void    FragTrap::beRepaired( unsigned int amount) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "FragTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "FragTrapTrap " << this->_name << " regains " 
    << amount << " hit points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}
///////////////////////
//[ Other functions ]//
///////////////////////
void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << this->_name << " says ; High fives, Guys? " << std::endl;
}
