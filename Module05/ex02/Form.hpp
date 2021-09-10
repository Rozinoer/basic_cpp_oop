#pragma once
#include <iostream>
#include "Exception.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    
protected:
    static void _GradeTooHighException( void );
    static void _GradeTooLowException( void );
    std::string _name;
    int _gradeRequired;
    int _gradeExecute;
    bool _isSigned;
public:
    Form(/* args */);
    Form(std::string name, int gradeReq, int gradeExe);
    virtual ~Form();
    void virtual execute(Bureaucrat const &executor) const = 0;
    std::string getName( void ) const;
    int getGradeRequired( void ) const;
    int getGradeExecute( void ) const;
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Form &form);
