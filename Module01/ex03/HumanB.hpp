#pragma once 

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
<<<<<<< HEAD
    Weapon *_wpn;
=======
    Weapon      *_wpn;
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &wpn);
    ~HumanB();
};
