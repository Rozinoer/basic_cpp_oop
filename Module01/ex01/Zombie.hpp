#pragma once
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    void announce( void );
    void setName(std::string name);
    Zombie(std::string name);
    Zombie( void );
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
