#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain* _brain;
public:
    void showIdeas() const;
    void makeSound() const;
    // Dog(std::string idea, std::string type);
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &other);
    Dog &operator = (const Dog &other);
};

