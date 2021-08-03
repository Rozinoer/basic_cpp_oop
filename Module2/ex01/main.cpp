#include "Zombie.hpp"

int main ( void )
{
    Zombie *z;
    int i = 0;

    z = zombieHorde(10, "tom");
    while (i < 10)
    {
        z[i].announce();
        i++;
    }
    delete[] z;
    return (0);
}