#pragma once

#include <iostream>

class Brain
{
private:
    std::string _ideas[100];
public:

    Brain(/* args */);
    Brain(std::string idea);
    ~Brain();
    void showIdea() const;
    Brain(const Brain &other);
    Brain &operator = (const Brain &other);
};

