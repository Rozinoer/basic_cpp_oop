#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int>			container(10, 1);
	std::vector<int>::iterator	it;
	std::vector<char>			wrong(10, 'a');
	std::vector<char>::iterator	wrong_it;

	try
	{	
		it = easyfind(container, 1);
		if (it != container.end())
			std::cout <<"Value " << *it << " has been found" <<  std::endl;
		else
			std::cout << "Value has not been found" << std::endl;
	}
	catch (const std::exception &e){ std::cerr << e.what() << std::endl;}
	try
	{
		wrong_it = easyfind(wrong, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
