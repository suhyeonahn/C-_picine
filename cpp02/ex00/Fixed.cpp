#include "Fixed.hpp"

Fixed::Fixed ( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed ( const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator= (const Fixed& other ) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    this->_value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed ( ) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits ( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}