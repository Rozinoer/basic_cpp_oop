#pragma once

# include <iostream>
# include <string>
# include <vector>

class Span
{

	public:

		Span();
		Span( Span const & src );
		Span( unsigned int n );
		~Span();

		void	addNumber(int const nb);
		unsigned int	shortestSpan(void) const;
		unsigned int	longestSpan(void) const;
		std::vector<int>	getList(void) const;
		
		template<typename InputIterator>
		void	addRange(InputIterator first, InputIterator last);
		
		class SizeMaxReachedException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: maximum size has been reached...");
			}
		};
		class NoNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: array is empty...");
			}
		};
		class LonelyNumberException: public std::exception
		{
			const char * what() const throw()
			{
				return ("Error: only one number in array...");
			}
		};
	
	private:
		const unsigned int	m_max;
		std::vector<int>	m_list;
		Span &		operator=( Span const & rhs );

};

template<typename InputIterator>
void	Span::addRange(InputIterator first, InputIterator last)
{
	while (first != last)
	{
		if (m_list.size() >= m_max)
			throw SizeMaxReachedException();
		m_list.push_back(*first);
		first++;
	}
	// Invalid arguments cause undefined behavior
}

std::ostream &			operator<<( std::ostream & o, Span const & i );