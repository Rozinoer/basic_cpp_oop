#pragma once

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon( std::string const &type);
    Weapon();
    std::string const &getType();
    void setType( std::string type);
    ~Weapon();
};