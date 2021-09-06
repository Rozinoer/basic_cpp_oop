#pragma once
#include <iostream>

class Fixed
{
private:
    int _fixedValue;
    static const int _numFractionalBits;
public:
    Fixed(/* args */);
    Fixed( const int value );
    Fixed( const float value );
    Fixed(const Fixed &other);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed & operator = (const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};

std::ostream & operator << (std::ostream &o, Fixed const &other);