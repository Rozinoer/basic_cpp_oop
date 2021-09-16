#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T> void print( T const & x )
{
	std::cout << x << std::endl;
	return ;
}

int main(void)
{
	std::string	str_array[4] = {"Школа" , "Школа", "School", "School"};
	int int_array[4] = {21, 42, 42, 21};

	int			size = 4;

	::iter(str_array, size, ::print);
	::iter(int_array, size, ::print);
	return (0);
}