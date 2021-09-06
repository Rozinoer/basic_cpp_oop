#pragma once

#include <iostream>

class Weapon
{
private:
<<<<<<< HEAD
    std::string type;
=======
    std::string _type;
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
public:
    Weapon( std::string const &type);
    Weapon();
<<<<<<< HEAD
    std::string const &getType();
    void setType( std::string type);
=======
    std::string const & getType();
    void setType(std::string type);
>>>>>>> 4c49f39b65ac3733f618e6d6994b4c853ea28ada
    ~Weapon();
};