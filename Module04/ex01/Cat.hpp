#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    void makeSound();
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
};
