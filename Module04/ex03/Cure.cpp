#include "Cure.hpp"

AMateria* Cure::clone() const
{
    std::cout << "Cure clone" << std::endl;
    return (0);
}

void Cure::use(ICharacter& target)
{
    target.getName();
}

Cure::Cure(/* args */)
{
    std::cout << "Cure def const" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}