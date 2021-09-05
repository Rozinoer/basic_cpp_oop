#include <iostream>
#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *z = newZombie(name);
    Zombie x("jack");
    x.announce();
    z->announce();
    delete z;
}
