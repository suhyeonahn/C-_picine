#include "Fixed.hpp"

Fixed::Fixed ( void ) {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed ( const int value ) {
    std::cout << "Int constructor called" << std::endl;
    this->_value = value << this->fractBits;
}

Fixed::Fixed ( const float value ) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = (int)roundf(value * (1 << this->fractBits));
}

Fixed::Fixed ( const Fixed& other ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator= ( const Fixed&  other) {
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
    return (this->_value);
}

void    Fixed::setRawBits ( int const raw ) {
    this->_value = raw;
}


float   Fixed::toFloat ( void ) const {
    return (static_cast<float>(this->_value) / (1 << this->fractBits));
}

int     Fixed::toInt( void ) const {
    return (this->_value >> this->fractBits);
}


bool    Fixed::operator> ( const Fixed& other ) {
    if (this->_value > other.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator< ( const Fixed& other ) {
    if (this->_value < other.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator>= ( const Fixed& other ) {
    if (this->_value >= other.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator<= ( const Fixed& other ) {
    if (this->_value <= other.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator== ( const Fixed& other ) {
    if (this->_value == other.getRawBits())
        return true;
    return false;
}

bool    Fixed::operator!= ( const Fixed& other ) {
    if (this->_value != other.getRawBits())
        return true;
    return false;
}


Fixed   Fixed::operator+ ( const Fixed& other ) {
    Fixed temp;

    temp.setRawBits(this->getRawBits() + other.getRawBits());
    return temp;
}

Fixed   Fixed::operator- ( const Fixed& other ) {
    Fixed temp;

    temp.setRawBits(this->getRawBits() - other.getRawBits());
    return temp;
}

Fixed   Fixed::operator* ( const Fixed& other ) {
    Fixed temp;

    temp.setRawBits((long)this->getRawBits() * (long)other.getRawBits() >> 8);
    return temp;
}

Fixed   Fixed::operator/ ( const Fixed& other ) {
    Fixed temp;

    temp.setRawBits(((long)this->getRawBits() << 8) / (long)other.getRawBits());
    return temp;
}


Fixed&  Fixed::operator++( void )
{
   this->_value++;
   return *this;
}

Fixed   Fixed::operator++( int )
{
   Fixed temp = *this;
   ++*this;
   return temp;
}

Fixed&  Fixed::operator--()
{
   this->_value--;
   return *this;
}

Fixed   Fixed::operator--( int )
{
   Fixed temp = *this;
   --*this;
   return temp;
}


Fixed&   Fixed::min ( Fixed& l, Fixed& r ) {
    if (l < r)
        return l;
    return r;
}

Fixed&   Fixed::max ( Fixed& l, Fixed& r ) {
    if (l > r)
        return l;
    return r;
}

const Fixed&   Fixed::min ( const Fixed& l, const Fixed& r) {
    if (l.getRawBits() < r.getRawBits())
        return (l);
    return r;
}
const Fixed&   Fixed::max ( const Fixed& l, const Fixed& r) {
    if (l.getRawBits() > r.getRawBits())
        return (l);
    return r;
}


std::ostream& operator<<  ( std::ostream& out, const Fixed& other ) {
    out << other.toFloat();
    return (out);
}