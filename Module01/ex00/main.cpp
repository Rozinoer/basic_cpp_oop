#include "Zombie.hpp"
#include <unistd.h>

void randomChump( std::string name )
{
    Zombie *z = newZombie(name);
    z->announce();
    delete z;
}
int main ( void )
{
    randomChump("tom");
    return (0);
}