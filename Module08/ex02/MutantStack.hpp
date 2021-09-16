
#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

#include <stack>
#include <deque>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() {}
		MutantStack(const MutantStack<T>& src)
		{
			*this = src;
		}
		MutantStack<T> &	operator=(const MutantStack<T>& rhs) 
		{
			this->c = rhs.c;
			return (*this);
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

#endif 