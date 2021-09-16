#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base	*getBase(int i)
{
	switch (i)
	{
	case 0:
		std::cout << "Class A" << std::endl;
		return new A;
		break;
	case 1:
		std::cout << "Class B" << std::endl;
		return new B;
		break;
	case 2:
		std::cout << "Class C" << std::endl;
		return new C;
		break;
	default:
		break;
	}
	return NULL;
}

void	identify(Base *p)
{
	A	*ptr_a = dynamic_cast<A *>(p);
	B	*ptr_b = dynamic_cast<B *>(p);
	C	*ptr_c = dynamic_cast<C *>(p);

	if (ptr_a)
		std::cout << "A" << std::endl;
	else if (ptr_b)
		std::cout << "B" << std::endl;
	else if (ptr_c)
		std::cout << "C" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A	&ref_a = dynamic_cast<A &>(p);
		(void)ref_a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		B	&ref_b = dynamic_cast<B &>(p);
		(void)ref_b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try
	{
		C	&ref_c = dynamic_cast<C &>(p);
		(void)ref_c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
}

int main(void)
{
	std::srand(std::time(NULL));
	Base	*ptr = getBase(rand() % 3);

	identify(ptr);
	identify(*ptr);
	delete ptr;	
	return 0;
}