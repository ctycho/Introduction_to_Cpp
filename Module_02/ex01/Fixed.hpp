#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    int     _value;
    static const int _numBits = 8;
public:
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();
    Fixed(const Fixed &another);
    Fixed &operator = (const Fixed &another);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat ( void ) const;
    int toInt ( void ) const;
};

std::ostream &operator << (std::ostream &out, Fixed const &value);

#endif
