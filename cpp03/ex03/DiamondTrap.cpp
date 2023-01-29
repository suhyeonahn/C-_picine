 #include "DiamondTrap.hpp"
//////////////
//[ Basics ]//
//////////////
DiamondTrap::DiamondTrap ( void ) : ClapTrap (), ScavTrap (), FragTrap () {
    std::cout << "[ DiamondTrap ]Default constructor called" << std::endl;
} 
DiamondTrap::DiamondTrap ( std::string name ): ClapTrap ( name + "_clap_name" ), ScavTrap (), FragTrap () {
    std::cout << "[ DiamondTrap ]Name constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}
DiamondTrap::DiamondTrap ( const DiamondTrap& other) : ClapTrap ( other ), ScavTrap (), FragTrap (),_name( other._name){
    std::cout << "[ DiamondTrap ]Copy constructor called" << std::endl;
}
DiamondTrap& DiamondTrap::operator= ( const DiamondTrap& other ) {
     std::cout << "[ DiamondTrap ]Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    this->_name = other._name;
    return (*this);
}
DiamondTrap::~DiamondTrap () {
    std::cout << "[ DiamondTrap ]Destructor called" << std::endl;
}
///////////////////////////
//[ Redefined functions ]//
///////////////////////////
std::string    DiamondTrap::getName ( void ) const {
    return (this->_name);
}
void    DiamondTrap::attack ( const std::string& target ) {
    this->ScavTrap::attack(target);
}
///////////////////////
//[ Other functions ]//
///////////////////////
void    DiamondTrap::whoAmI ( void ) {
    std::cout << "DiamondTrap name : " << this->_name << ", ClapTrap name : " << ClapTrap::_name << std::endl;
}