#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
    Brain* brain;
public:
    void showIdeas();
    virtual void makeSound();
    Animal(/* args */);
    Animal(std::string type);
    virtual ~Animal();
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
};

