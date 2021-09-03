#include "AMateria.hpp"

AMateria::AMateria(/* args */)
{
    std::cout << "[AMateria]\tDefault constructor called" << std::endl;
}

AMateria::~AMateria()
{

}

void AMateria::use(ICharacter& target)
{
    target.getName();
    std::cout << "[AMateria]\tUsing.." << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "[AMateria]\tType constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria const &other)
{
    std::cout << "[AMateria]\tCopy constructor" << std::endl;
    *this = other;
}
 
AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "[AMateria]\tAssignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}

std::string const & AMateria::getType() const
{
    return this->type;
}