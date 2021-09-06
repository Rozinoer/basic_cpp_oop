#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->_name + " attacks with his " + this->_wpn.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wpn) : _name(name), _wpn(wpn)
{
<<<<<<< HEAD
    
=======
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
}

HumanA::~HumanA()
{
}