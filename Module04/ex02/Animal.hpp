
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string type;
    Brain* brain;
public:
    Animal(/* args */);
    Animal(std::string type);
    virtual ~Animal();
    
    void showIdeas();
    virtual void makeSound() = 0;
    Animal(const Animal &other);
    Animal &operator = (const Animal &other);
};

