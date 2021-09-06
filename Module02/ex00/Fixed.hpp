#pragma once

#include <iostream>

class Fixed
{
private:
    int _fixedValue;
    static const int _numFractionalBits;
public:
    Fixed(/* args */);
    Fixed(const Fixed &other);
    Fixed & operator = (const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    ~Fixed();
};
