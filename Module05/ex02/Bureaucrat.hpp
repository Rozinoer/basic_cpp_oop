#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

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

    void executeForm(Form const &form);
    void signForm(std::string name, int isSigned);

    void incrementGrade( void );
    void decrementGrade( void );

    std::string const getName( void ) const;
    int getGrade( void ) const;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);