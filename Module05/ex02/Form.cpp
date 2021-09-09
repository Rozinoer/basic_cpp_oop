#include "Form.hpp"
#include "Exception.hpp"

Form::Form(/* args */) : _gradeRequired(-1), _gradeExecute(1)
{
    throw Exception("Ivalid Form init");
}

Form::Form(std::string name, int gradeReq, int gradeExe) : _name(name),
     _gradeRequired(gradeReq), _gradeExecute(gradeExe), _isSigned(0)
{
    if (this->_gradeExecute > 150 || this->_gradeRequired > 150)
        Form::_GradeTooLowException();
    if (this->_gradeExecute < 1 || this->_gradeRequired < 1)
        Form::_GradeTooHighException();
}

void Form::_GradeTooHighException( void )
{
    throw Exception("GradeTooHighException");
}

void Form::_GradeTooLowException( void )
{
    throw Exception("GradeTooLowException");
}

std::string Form::getName( void ) const
{
    return this->_name;
}
int Form::getGradeRequired( void ) const
{
    return this->_gradeRequired;
}
int Form::getGradeExecute( void ) const
{
    return this->_gradeExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeRequired)
        Form::_GradeTooLowException();
    else if (this->_isSigned == 0)
    {
        this->_isSigned = 1;
        bureaucrat.signForm(this->getName(), this->_isSigned);
    }
    else
        bureaucrat.signForm(this->getName(), this->_isSigned);
}

Form::~Form()
{
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os <<  "Name:\t" + form.getName() << std::endl <<
        "Grade for require:\t" << form.getGradeRequired() << std::endl <<
        "Grade for execute:\t" << form.getGradeExecute() << std::endl;
    return os;
}