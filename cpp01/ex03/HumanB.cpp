#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(nullptr){}

HumanB::~HumanB() {}

void    HumanB::attack( void ) const{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void    HumanB::setWeapon( Weapon& weapon ) {
    _weapon = &weapon;
}