
#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int main(void)
{
	{	
		Span	sp(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		Span sp(5);
		std::cout<< "Size of empty list: " << sp.getList().size() << std::endl;
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Span sp(5);
		try
		{
			sp.fillArray(1, 5);
			std::vector <int> list(sp.getList());
			for (std::vector <int>::iterator i = list.begin(); i < list.end(); i++)
				std::cout << *i << std::endl;
			std::cout << std::endl;
			sp.addNumber(999);
			std::vector <int> _list(sp.getList());
			for (std::vector <int>::iterator i = _list.begin(); i < _list.end(); i++)
				std::cout << *i << std::endl;
		}
		catch (std::exception &e){std::cerr << e.what() << std::endl;}
	}
	{
		Span sp(5);
		try
		{
			sp.fillArray(0, 10);
			std::vector <int> list(sp.getList());
			for (std::vector<int>::iterator i = list.begin(); i < list.end() - 1; i++)
				std::cout << *i << std::endl;
		}
		catch (std::exception &e){std::cerr << e.what() << std::endl;}
	}
	{	
		Span	sp(5000);

		sp.fillArray(0, 5000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}