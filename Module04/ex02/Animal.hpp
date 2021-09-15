#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
public:
    Animal(/* args */);
    virtual ~Animal();
    virtual void makeSound() const = 0;
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
};

