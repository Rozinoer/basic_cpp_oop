
#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon      &_wpn;
public:
    HumanA(std::string name, Weapon &wpn);
    void attack();
    ~HumanA();
};
