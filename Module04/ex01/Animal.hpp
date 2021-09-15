#pragma once
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;
public:
    virtual void makeSound() const;
    Animal(/* args */);
    virtual ~Animal();
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
};

