
#include "Fixed.hpp"

Fixed::Fixed(): _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &another) {
    std::cout << "Copy constructor called" << std::endl;
    _value = another.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &another) {
    std::cout << "Assignation operator called" << std::endl;
    this->_value = another.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits( int const raw ) {
    _value = raw;
};
