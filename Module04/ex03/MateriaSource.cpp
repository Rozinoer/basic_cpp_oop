#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
    std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    std::cout << "Copy constructor" << std::endl;
    *this = other;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource distructor" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {

    }
    return *(this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    std::cout << "Materia type:\t" + m->getType() << std::endl;;
    std::cout << "MateriaSource: learnMateria" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    std::cout << "MateriaSource: createMateria" + type<< std::endl;
    return ;
}