#pragma once

# include <iostream>
# include <string>
# include <vector>
# include <ctime>
class Span
{
	private:
		const unsigned int	_maxSize;
		std::vector<int>	_list;
		Span &		operator=( Span const & rhs );
	public:
		Span();
		Span( Span const & src );
		Span( unsigned int n );
		~Span();

		void	addNumber(int const nb);
		unsigned long	shortestSpan(void) const;
		unsigned long	longestSpan(void) const;
		std::vector<int>	getList(void) const;
		
		template<typename T> void	fillArray(T first, T last);
		
		class ArrayIsFullException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: array is full...");
			}
		};
		class ArrayEmptyException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: array is empty...");
			}
		};
		class ArrayOneNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: one number in array...");
			}
		};
};

template<typename T>
void	Span::fillArray(T first, T last)
{
	std::srand(std::time(NULL));
	while (first != last)
	{
		if (_list.size() >= _maxSize)
			throw ArrayIsFullException();
		_list.push_back(rand() % 1000);
		first++;
	}
}

std::ostream &			operator<<( std::ostream & o, Span const & i );