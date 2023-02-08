#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
    std::cout << "Dog: Default Constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog( const Dog & src ) : Animal( src )
{
    std::cout << "Dog: Copy Constructor called" << std::endl;
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog: Default Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog: Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    Dog::makeSound ( void ) const {
    std::cout << "Woof" << std::endl;
}


/* ************************************************************************** */