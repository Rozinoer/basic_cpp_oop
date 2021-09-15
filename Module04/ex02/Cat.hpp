#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    void makeSound() const;
    void showIdeas() const;
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
};
