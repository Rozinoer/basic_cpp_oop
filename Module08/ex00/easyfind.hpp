#pragma once
#include <algorithm>

class ValueNotFoundException: public std::exception
{
	const char * what() const throw()
	{
		return ("Error: value not found ..");
	}
};

template<typename T>
typename T::iterator	easyfind(T & container, int value)
{
	typename T::iterator i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw ValueNotFoundException();
	return (std::find(container.begin(), container.end(), value));
}
