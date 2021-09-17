#include "Span.hpp"
#include <algorithm>

Span::Span(): _maxSize(0)
{
}

Span::Span( const Span & src ): _maxSize(src._maxSize), _list(src._list)
{
}

Span::Span( unsigned int n): _maxSize(n)
{
}

Span::~Span()
{
}

void	Span::addNumber(int const nb)
{
	if (_list.size() >= _maxSize)
		throw ArrayIsFullException();
	_list.push_back(nb);
}

unsigned long	Span::shortestSpan(void) const
{
	unsigned long shortSpan;
	std::vector<int>	list(_list);
	if (!_list.size())
		throw ArrayEmptyException();
	else if (_list.size() == 1)
		throw ArrayOneNumberException();
	shortSpan = longestSpan();
	std::sort(list.begin(), list.end());
	for (std::vector<int>::iterator i = list.begin(); i < list.end() - 1; i++)
	{
		if ((*(i + 1) - *i) < static_cast<int>(shortSpan))
			shortSpan = *(i + 1) - *i;
	}
	return (shortSpan);
}

unsigned long	Span::longestSpan(void) const
{
	unsigned long longestSpan;
	std::vector <int>list(_list);
	if (!_list.size())
		throw ArrayEmptyException();
	else if (_list.size() == 1)
		throw ArrayOneNumberException();
	std::sort(list.begin(), list.end());
	longestSpan = *(list.end() - 1) - *list.begin();
	return longestSpan;
}

std::vector<int>	Span::getList(void) const
{
	return (_list);
}

Span& Span::operator=( Span const & other )
{
	if (this == &other){}
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Span const & span )
{
	std::vector<int>	list = span.getList();

	for (std::vector<int>::iterator it = list.begin(); it != list.end(); it++)
	{	
		o << " | " << *it;
		if (it == list.end() - 1)
			o << std::endl;
	}
	return o;
}

