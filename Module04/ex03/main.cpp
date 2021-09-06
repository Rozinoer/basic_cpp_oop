#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main( void )
{
    IMateriaSource *src = new MateriaSource();
    
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    AMateria *mt;

    ICharacter* me = new Character("me");
    ICharacter* bob = new Character("bob");

    mt = src->createMateria("cure");
    me->equip(mt);
    mt = src->createMateria("ice");
    me->equip(mt);
    // std::cout << bob->getName() << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(4, *bob);
}
