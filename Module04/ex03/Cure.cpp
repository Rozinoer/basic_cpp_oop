#include "Cure.hpp"

void Cure::message(std::string name) const
{
    std::cout << "* heals " + name + " wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    std::cout << "[Cure]\tClone" << std::endl;
    return new Cure();
}

void Cure::use(ICharacter& target)
{
    Cure::message(target.getName());
}

Cure::Cure(/* args */)
{
    std::cout << "[Cure]\tDefault constructor" << std::endl;
    this->type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &other)
{
    std::cout << "[Cure]\tCopy constructor" << std::endl;
    *this = other;
}
 
Cure &Cure::operator=(const Cure &other)
{
    std::cout << "[Cure]\tAssignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}