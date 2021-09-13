#include "ClapTrap.hpp"

int main ( void )
{
    ClapTrap cl("TRAPPA");
    cl.attack("BUGG");
    cl.takeDamage(1);
    cl.beRepaired(1);
    return (0);
}