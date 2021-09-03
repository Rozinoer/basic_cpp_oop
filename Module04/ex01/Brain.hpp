

#include <iostream>

class Brain
{
private:
    /* data */
public:
    std::string _ideas[100];

    Brain(/* args */);
    ~Brain();
    Brain(const Brain &other);
    Brain &operator = (const Brain &other);
};

