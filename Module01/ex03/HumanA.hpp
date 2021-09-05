
#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon wpn;
public:
    HumanA(std::string name, Weapon wpn);
    void attack();
    ~HumanA();
};
