#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain* _brain;
public:
    void showIdeas() const;
    void makeSound() const;
    Cat(/* args */);
    ~Cat();
    Cat(const Cat &other);
    Cat &operator = (const Cat &other);
};
