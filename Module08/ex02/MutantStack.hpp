#pragma once
#include <stack>
#include <deque>

template<typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T>& other)
		{
			(std::stack<T>(other));
		}
		MutantStack<T> &	operator=(const MutantStack<T>& other) 
		{
			std::stack<T>::operator=(other);
		}
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
};