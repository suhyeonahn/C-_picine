#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria( std::string const & type ) : _type(type) {}

AMateria::AMateria( AMateria const & other)
{
	this->_type = other._type;
}

AMateria & AMateria::operator=( AMateria const & other)
{
    if (this == &other)
        return *this;
    this->_type = other._type;
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return this->_type;
}