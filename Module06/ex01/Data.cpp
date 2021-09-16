#include "Data.hpp"

Data::Data(): _value(0)
{
}

Data::Data( const Data & src ): _value(src._value)
{
}

Data::Data(int value): _value(value)
{
}

Data::~Data()
{
}

Data& Data::operator=(Data const &other)
{
	if (this != &other)
		_value = other._value;
	return *this;
}

int	Data::getValue() const
{
	return _value;
}
