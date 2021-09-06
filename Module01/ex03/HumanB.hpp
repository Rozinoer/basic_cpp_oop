#pragma once 

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon      *_wpn;
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &wpn);
    ~HumanB();
};
