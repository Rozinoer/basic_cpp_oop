#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{
    // ClapTrap trap = ClapTrap("Tom");
    FragTrap frag = FragTrap();
    FragTrap tom = FragTrap("Tom");
    frag.highFivesGuys();
    tom.attack("BUGGGGG");
    return (0);
}