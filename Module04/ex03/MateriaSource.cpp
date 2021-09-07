#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
    std::cout << "[MateriaSource]\tDefault constructor" << std::endl;
    this->_spells[0] = NULL;
    this->_spells[1] = NULL;
    this->_spells[2] = NULL;
    this->_spells[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
    std::cout << "[MateriaSource]\tCopy constructor" << std::endl;
    *this = other;
}

MateriaSource::~MateriaSource()
{
    std::cout << "[MateriaSource]\tMateriaSource distructor" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    std::cout << "[MateriaSource]\tAssignation operator called" << std::endl;
    if (this != &other)
    {
        for (int i =0; i < 4; i++)
            this->_spells[i] = other._spells[i];
    }
    return *(this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    std::cout << "[MateriaSource]\tLearnMateria.." << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_spells[i] == 0)
        {
            this->_spells[i] = m;
            break ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    std::cout << "[MateriaSource]\tCreateMateria --->" + type<< std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_spells[i] && this->_spells[i]->getType() == type)
        {
            return this->_spells[i]->clone();
        }
    }
    return 0;
}