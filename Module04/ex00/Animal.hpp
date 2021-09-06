#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    virtual void makeSound();
    Animal(/* args */);
    Animal(std::string type);
    ~Animal();
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
};

