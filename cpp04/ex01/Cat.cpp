#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal ()
{
    std::cout << "Cat" << ": Default Constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal ( src )
{
	std::cout << "Cat" << ": Copy Constructor called" << std::endl;
    this->_brain = new Brain();
    *this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat" << ": Default Destructor called" << std::endl;
    delete this->_brain;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
    std::cout << "Cat" << "Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->_type = rhs._type;
    *(this->_brain) = *(rhs._brain);
	return *this;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void    Cat::makeSound ( void ) const {
    std::cout << "Meow" << std::endl;
}


/* ************************************************************************** */