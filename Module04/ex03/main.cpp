#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"

int main( void )
{
    IMateriaSource *src = new MateriaSource();
    AMateria *cure = new Cure();
    src->learnMateria(cure);
    return 0;
}