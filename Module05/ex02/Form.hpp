#pragma once
#include <iostream>
#include "Bureaucrat.hpp"
#include "Exception.hpp"

class Form
{
private:
    static void _GradeTooHighException( void );
    static void _GradeTooLowException( void );
protected:
    const std::string _name;
    int _gradeRequired;
    int _gradeExecute;
    bool _isSigned;
public:
    Form(/* args */);
    Form(std::string name, int gradeReq, int gradeExe);
    virtual ~Form();
    std::string getName( void ) const;
    int getGradeRequired( void ) const;
    int getGradeExecute( void ) const;
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);
