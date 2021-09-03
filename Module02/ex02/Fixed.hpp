

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

	static float min(Fixed &a, Fixed &b);
	static float min(const Fixed &a, const Fixed &b);
	static float max(Fixed &a, Fixed &b);
	static float max(const Fixed &a, const Fixed &b);

	Fixed &operator = (const Fixed &other);
	float operator + (const Fixed &other);
	float operator - (const Fixed &other);
	float operator * (const Fixed &other);
	float operator / (const Fixed &other);

	Fixed &operator ++ ();
	Fixed &operator -- ();
	Fixed operator ++ (int value);
	Fixed operator -- (int value);

	bool operator > (const Fixed &other);
	bool operator < (const Fixed &other);
	bool operator >= (const Fixed &other);
	bool operator <= (const Fixed &other);
	bool operator == (const Fixed &other);
	bool operator != (const Fixed &other);

	float   toFloat( void ) const;
	int     toInt( void )   const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	~Fixed();
};

std::ostream & operator << (std::ostream &o, Fixed const &other);