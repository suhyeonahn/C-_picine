#include "Weapon.hpp"

Weapon::Weapon( void ) {}

Weapon::Weapon( std::string type ) : _type(type){}

Weapon::~Weapon() {}

const std::string&  Weapon::getType( void ) {
    return (this->_type);
}

void    Weapon::setType( std::string type ) {
    _type = type;
}