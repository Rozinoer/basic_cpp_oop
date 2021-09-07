#pragma once

#include <iostream>

class Bureaucrat
{
private:
    std::string const _name;
    const int _grade;
public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat( void );
    ~Bureaucrat();

    std::string const getName( void ) const;
    int getGrade( void ) const;
};
