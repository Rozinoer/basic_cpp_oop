#include "Ice.hpp"

AMateria* Ice::clone() const
{
    std::cout << "[Ice]\tClone" << std::endl;
    return new Ice();
}

void Ice::use(ICharacter& target)
{
    Ice::message(target.getName());
}

void Ice::message(std::string name) const
{
    std::cout << "* shoots an ice bolt at " + name + " *"<< std::endl;
}

Ice::Ice(/* args */)
{
    std::cout << "[Ice]\tDefault constructor" << std::endl;
    this->type = "ice";
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
        this->type = other.type;
    }
    return *(this);
}