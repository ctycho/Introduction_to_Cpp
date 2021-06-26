#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    int     _value;
    static const int _numBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &another);
    Fixed &operator = (const Fixed &another);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};


#endif
