

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon wpn;
public:
    HumanB(std::string name, Weapon wpn);
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon wpn);
    ~HumanB();
};
