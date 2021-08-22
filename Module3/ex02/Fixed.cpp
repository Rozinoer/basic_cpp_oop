#include "Fixed.hpp"
#include <cmath>

const int Fixed::_numFractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedValue = 0;
}

Fixed::Fixed( int const value )
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedValue = value * (1 << this->_numFractionalBits);
}

Fixed::Fixed( float const value )
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedValue = roundf((1 << this->_numFractionalBits) * value);
}

Fixed::Fixed(Fixed const &other)
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

float Fixed::operator+(const Fixed &other)
{
    float val;
        val = (this->toFloat() + other.toFloat());
    return val;
}

float Fixed::operator-(const Fixed &other)
{
    float val;
        val = (this->toFloat() - other.toFloat());
    return val;
}

float Fixed::operator*(const Fixed &other)
{
    float val;
        val = (this->toFloat() * other.toFloat());
    return val;
}

float Fixed::operator/(const Fixed &other)
{
    float val;
        val = (this->toFloat() / other.toFloat());
    return val;
}

bool Fixed::operator==(const Fixed &other)
{
    if (this->_fixedValue == other._fixedValue)
        return true;
    else
        return false;
}

bool Fixed::operator!=(const Fixed &other)
{
    if (this->_fixedValue != other._fixedValue)
        return true;
    else
        return false;
}

bool Fixed::operator>(const Fixed &other)
{
    if (this->_fixedValue > other._fixedValue)
        return true;
    else
        return false;
}

bool Fixed::operator<(const Fixed &other)
{
    if (this->_fixedValue < other._fixedValue)
        return true;
    else
        return false;
}

bool Fixed::operator<=(const Fixed &other)
{
    if (this->_fixedValue <= other._fixedValue)
        return true;
    else
        return false;
}

bool Fixed::operator>=(const Fixed &other)
{
    if (this->_fixedValue >= other._fixedValue)
        return true;
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

Fixed &Fixed::operator++()
{
    this->_fixedValue++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->_fixedValue--;
    return *this;
}

Fixed Fixed::operator++(__unused int value)
{
    Fixed tmp(*this);

    this->_fixedValue++;
    return tmp;
}

Fixed Fixed::operator--(__unused int value)
{
    Fixed tmp(*this);

    this->_fixedValue--;
    return tmp;
}

float Fixed::toFloat( void ) const
{
    return (float)(this->_fixedValue / (float)(1 << this->_numFractionalBits));
}

int Fixed::toInt( void ) const
{
    return this->_fixedValue / (1 << this->_numFractionalBits);
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

float Fixed::min(Fixed &a, Fixed &b)
{
    if (a._fixedValue < b._fixedValue)
        return a.toFloat();
    else
        return b.toFloat();
}

float Fixed::max(Fixed &a, Fixed &b)
{
    if (a._fixedValue > b._fixedValue)
        return a.toFloat();
    else
        return b.toFloat();
}

float Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a._fixedValue < b._fixedValue)
        return a.toFloat();
    else
        return b.toFloat();
}

float Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a._fixedValue > b._fixedValue)
        return a.toFloat();
    else
        return b.toFloat();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}