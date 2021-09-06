#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
    void makeSound();
    Dog(std::string idea, std::string type);
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
};

