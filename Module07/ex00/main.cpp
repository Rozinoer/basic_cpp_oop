#include "whatever.hpp"
#include <string.h>
#include <iostream>

class UserType
{
private:
	int _i;
public:
	UserType(/* args */) : _i(42){};
	UserType(int i) : _i(i){};
	int getValue() const {return _i;}
	bool operator<(const UserType &ut) const 
	{
		if (_i < ut._i)
			return 1;
		else
			return 0;
	}
	bool operator>(const UserType &ut) const 
	{
		if (_i > ut._i)
			return 1;
		else
			return 0;
	}
	bool operator<=(const UserType &ut) const 
	{
		if (_i <= ut._i)
			return 1;
		else
			return 0;
	}
	bool operator>=(const UserType &ut) const 
	{
		if (_i >= ut._i)
			return 1;
		else
			return 0;
	}
	bool operator!=(const UserType &ut) const 
	{
		if (_i != ut._i)
			return 1;
		else
			return 0;
	}
	UserType& operator=(const UserType &ut)
	{
    	if (this != &ut)
        	_i = ut.getValue();
    	return *(this);
	}
	~UserType(){};
};

std::ostream &operator<<(std::ostream &os, const UserType &ut)
{
    os << ut.getValue();
    return os;
}


int main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	{
		 UserType  ut;
		 UserType  mt(100);
		 std::cout << "ut: " << ut << std::endl; 
		std::cout << "mt: " << mt << std::endl; 
		std::cout << "max: " << ::max(ut, mt) << std::endl;
		std::cout << "min: " << ::min(ut, mt) << std::endl;
		::swap(ut, mt);
		std::cout << "ut: " << ut << std::endl; 
		std::cout << "mt: " << mt << std::endl; 
	}
	return 0;
}
