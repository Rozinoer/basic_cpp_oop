

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(/* args */);
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
    FragTrap(const FragTrap &other);
    FragTrap &operator = (const FragTrap &other);
};