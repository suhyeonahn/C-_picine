#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : _type( "Animal" )
{
	std::cout << "Animal: Default Constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	std::cout << "Animal: Copy Constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal: Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Animal::setType( std::string type)
{
	this->_type = type;
}

std::string Animal::getType( void ) const
{
    return this->_type;
}

void	Animal::makeSound( void ) const
{
    std::cout << "..." << std::endl;
}


/* ************************************************************************** */