#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int                 _value; //la valeur du nombre en virgule fixe
    static const int    fractBits = 8; //le nombre de bits de la partie fractionnaire

public:
    Fixed ( void );
    Fixed ( const int value );
    Fixed ( const float value );
    Fixed ( const Fixed& other);
    Fixed& operator= ( const Fixed& other );
    ~Fixed ( );

    int     getRawBits ( void ) const; //qui retourne 
    // la valeur du nombre à virgule fixe sans la convertir.
    void    setRawBits ( int const raw ); //qui initialise la valeur 
    // du nombre à virgule fixe avec celle passée en paramètre.

    float   toFloat ( void ) const;
    int     toInt ( void ) const;

    bool    operator> ( const Fixed& other );
    bool    operator< ( const Fixed& other );
    bool    operator>= ( const Fixed& other  );
    bool    operator<= ( const Fixed& other );
    bool    operator== ( const Fixed& other  );
    bool    operator!= ( const Fixed& other );

    Fixed   operator+ ( const Fixed& other );
    Fixed   operator- ( const Fixed& other );
    Fixed   operator* ( const Fixed& other );
    Fixed   operator/ ( const Fixed& other );

    // Declare prefix and postfix increment operators.
    Fixed& operator++();       // Prefix increment operator.
    Fixed   operator++(int);     // Postfix increment operator.

    // Declare prefix and postfix decrement operators.
    Fixed&  operator--();       // Prefix decrement operator.
    Fixed   operator--(int);     // Postfix decrement operator.

    static Fixed&   min ( Fixed& l, Fixed& r );
    static Fixed&   max ( Fixed& l, Fixed& r );

    static const Fixed&   min ( const Fixed& l, const Fixed& r);
    static const Fixed&   max ( const Fixed& l, const Fixed& r);
};

Fixed&   min ( Fixed& l, Fixed& r );
Fixed&   max ( Fixed& l, Fixed& r );
const Fixed&   min ( const Fixed& l, const Fixed& r);
const Fixed&   max ( const Fixed& l, const Fixed& r);

std::ostream& operator<< ( std::ostream& out, const Fixed& other );

#endif