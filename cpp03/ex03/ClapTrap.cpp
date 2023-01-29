#include "ClapTrap.hpp"
//////////////
//[ Basics ]//
//////////////
ClapTrap::ClapTrap ( void ) {
    std::cout << "[ ClapTrap ]Default constructor called" << std::endl;
}
ClapTrap::ClapTrap ( std::string name ) : _name(name), _hitPoints(100),
_energyPoints(50), _attackDamage(20) {
    std::cout << "[ ClapTrap ]Name constructor called" << std::endl;
}
ClapTrap::ClapTrap ( const ClapTrap& other) {
    std::cout << "[ ClapTrap ]Copy constructor called" << std::endl;
    *this = other;
}
ClapTrap& ClapTrap::operator= ( const ClapTrap& other ) {
    std::cout << "[ ClapTrap ]Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap () {
    std::cout << "[ ClapTrap ]Destructor called" << std::endl;
}
//////////////
//[ Getter ]//
//////////////
std::string    ClapTrap::getName ( void ) const {
    return (this->_name);
}
int             ClapTrap::getHitPoints( void ) const {
    return (this->_hitPoints);
}
int             ClapTrap::getEnergyPoints( void ) const {
    return (this->_energyPoints);
}
int             ClapTrap::getAttackDamage ( void ) const {
    return (this->_attackDamage);
}
///////////////////////
//[ Other functions ]//
///////////////////////
void    ClapTrap::attack ( const std::string& target ) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "ClapTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target 
    << " causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}
void    ClapTrap::takeDamage ( unsigned int amount ) {
    std::cout << "ClapTrap " << this->_name << " takes "
    << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
}
void    ClapTrap::beRepaired( unsigned int amount) {
    if ( this->_hitPoints <=0 || this->_energyPoints <= 0 ) {
        std::cout << "ClapTrap " << this->_name << " is out of energy." 
        << " Can't take any action." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " regains " 
    << amount << " hit points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}