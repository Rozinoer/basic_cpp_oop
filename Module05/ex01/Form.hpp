#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    static void _GradeTooHighException( void );
    static void _GradeTooLowException( void );

    const std::string _name;
    const int _gradeRequired;
    const int _gradeExecute;
    bool _isSigned;
public:
    Form(/* args */);
    Form(std::string name, int gradeReq, int gradeExe);
    ~Form();
    std::string getName( void ) const;
    int getGradeRequired( void ) const;
    int getGradeExecute( void ) const;
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);
