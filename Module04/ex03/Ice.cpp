#include "Ice.hpp"

AMateria* Ice::clone() const
{
    return 0;
}

void Ice::use(ICharacter& target)
{
    target.getName();
}

Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        
    }
    return *(this);
}