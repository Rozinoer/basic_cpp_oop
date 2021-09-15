#pragma once 

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
    void makeSound() const;
    void showIdeas() const;
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
};

