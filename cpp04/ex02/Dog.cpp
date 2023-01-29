#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal()
{
    std::cout << "Dog" << ": Default Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src ) : Animal ( src )
{
	std::cout << "Dog" << ": Copy Constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog" << ": Default Destructor called" << std::endl;
    delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
    std::cout << "Dog" << ": Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    Animal::operator=(rhs);
    *(this->_brain) = *(rhs._brain);
    return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    Dog::makeSound ( void ) const {
    std::cout << "Woof" << std::endl;
}


/* ************************************************************************** */