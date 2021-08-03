#pragma once

#include <iostream>

class Weapon
{
private:
    std::string type;
    std::string &typeRef;
public:
    Weapon(std::string type);
    Weapon();
    std::string getType();
    void setType(std::string type);
    ~Weapon();
};