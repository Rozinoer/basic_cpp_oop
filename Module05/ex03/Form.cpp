#include "Form.hpp"

Form::Form(/* args */) : _name("Default name"), _gradeRequired(150), _gradeExecute(150)
{

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
    throw Form::GradeTooHighException();
}

void Form::_GradeTooLowException( void )
{
    throw Form::GradeTooLowException();
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
        bureaucrat.signForm(this->getName(), 1);
    }
    else
        bureaucrat.signForm(this->getName(), 0);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "GradeTooHighException";
}
const char * Form::GradeTooLowException::what() const throw()
{
    return "GradeTooLowException";
}
const char * Form::FormNotSignedException::what() const throw()
{
    return "FormNotSignedException";
}
const char * Form::FormAlreadySignedException::what() const throw()
{
    return "FormAlreadySignedException";
}

bool Form::isSigned() const
{
    return this->_isSigned;
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