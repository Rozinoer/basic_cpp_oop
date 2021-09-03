

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>


class MateriaSource : public IMateriaSource
{
private:
    AMateria *_spells[4];
public:
    MateriaSource(/* args */);
    ~MateriaSource();

    MateriaSource(const MateriaSource &other);
    MateriaSource &operator = (const MateriaSource &other);
    
    void learnMateria(AMateria *m);
    AMateria* createMateria(std::string const & type);
    
};

#endif