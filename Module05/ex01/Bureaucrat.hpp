#pragma once

#include <iostream>
#include "Exception.hpp"

class Bureaucrat
{
private:
    std::string const _name;
    int _grade;

    static void _GradeTooHighException( void );
    static void _GradeTooLowException( void );
public:
    Bureaucrat(std::string const name, int grade);
    Bureaucrat( void );
    ~Bureaucrat();

    void signForm(std::string name, int isSigned);

    void incrementGrade( void );
    void decrementGrade( void );

    std::string const getName( void ) const;
    int getGrade( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);