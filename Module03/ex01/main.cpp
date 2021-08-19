#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
    ClapTrap trap = ClapTrap("Tom");
    ScavTrap scav = ScavTrap("Ivan");

    trap.attack("Jpnh");
    scav.attack("qwe");
    trap.beRepaired(2);
    return (0);
}