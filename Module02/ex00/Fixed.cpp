#include "Fixed.hpp"

const int Fixed::_numFractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedValue = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    // this->_fixedValue = other._fixedValue;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        this->_fixedValue = other.getRawBits();
    return *(this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedValue;
}
void Fixed::setRawBits( int const raw )
{
    this->_fixedValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}