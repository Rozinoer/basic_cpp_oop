#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void )
{
    	DiamondTrap	jon("Jon Snow");
	
	jon.whoAmI();
	{
		DiamondTrap	night_k("Night King");
		DiamondTrap	jon_bis(jon);

		night_k.whoAmI();
		jon_bis.whoAmI();
		jon.highFivesGuys();
		night_k.attack("jon");
		jon_bis.takeDamage(night_k.getDamage());
		night_k.attack("jon");
		jon_bis.takeDamage(night_k.getDamage());
		night_k.guardGate();
	}
	DiamondTrap arya;
	arya.whoAmI();
	arya = jon;
	arya.whoAmI();
    return (0);
}