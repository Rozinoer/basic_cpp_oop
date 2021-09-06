
#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
<<<<<<< HEAD
    Weapon &_wpn;
=======
    Weapon      &_wpn;
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
public:
    HumanA(std::string name, Weapon &wpn);
    void attack();
    ~HumanA();
};
