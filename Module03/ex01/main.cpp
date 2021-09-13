#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{
    ClapTrap trap = ClapTrap("Tom");
    ScavTrap scav = ScavTrap("Ivan");

    ScavTrap scav1;

    trap.attack("Jpnh");
    scav.attack("qwe");
    trap.beRepaired(2);
    scav.guardGate();
    return (0);
}