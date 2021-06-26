
#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value * (1 << _numBits);
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _numBits));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &another) {
    std::cout << "Copy constructor called" << std::endl;
    *this = another;
}

Fixed &Fixed::operator = (const Fixed &another) {
    std::cout << "Assignation operator called" << std::endl;
    _value = another._value;
    return *this;
}

std::ostream &operator << (std::ostream &out, Fixed const &value) {
    out << value.toFloat();
    return (out);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits( int const raw ) {
    _value = raw;
};

float Fixed::toFloat ( void ) const {
    return ((float)_value / (float)(1 << _numBits));
}

int Fixed::toInt ( void ) const {
    return ((int)_value / (int)(1 << _numBits));
}
