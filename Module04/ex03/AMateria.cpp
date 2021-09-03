#include "AMateria.hpp"

AMateria::AMateria(/* args */)
{
    std::cout << "[AMateria]Default constructor called" << std::endl;
}

AMateria::~AMateria()
{

}

void AMateria::use(ICharacter& target)
{
    target.getName();
    std::cout << "AMateria use()" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "[AMateria]Type constructor called" << std::endl;
    this->type = type;
}

AMateria::AMateria(AMateria const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}
 
AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}

std::string const & AMateria::getType() const
{
    return this->type;
}