#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"

int main( void )
{
    IMateriaSource *src = new MateriaSource();
    
    src->learnMateria(new Cure());
    AMateria *mt;
    mt = src->createMateria("cure");
    std::cout << mt->getType() << std::endl;
    return 0;
}