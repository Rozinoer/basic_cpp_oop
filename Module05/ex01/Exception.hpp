#pragma once
#include <iostream>
class Exception
{
private:
    std::string _error;
public:
    Exception(std::string error);
    ~Exception();
    void error( void );
};
