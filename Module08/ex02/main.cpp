#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	{
		MutantStack<int> mutant;
		int i = 1;
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		std::cout << "MutantStack size: " << mutant.size() << std::endl;
		std::cout << "MutantStack top: " << mutant.top() << std::endl;
		mutant.pop();
		std::cout << "MutantStack top after pop: " << mutant.top() << std::endl;
	}
	{
		MutantStack<int> mutant;
		int i = 1;
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		mutant.push(i++);
		
		MutantStack<int>::iterator begin = mutant.begin();
		MutantStack<int>::iterator end = mutant.end();
		for( ; begin != end; begin++)
			std::cout << *begin << std::endl;
	}

	return (0);
}
